
class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
      priority_queue<int> maxHeap;
      for (int num : nums) {
        maxHeap.push(num);
    }

    for (int i = 0; i < k - 1; ++i) {
        maxHeap.pop();
    }

    return maxHeap.top();
    }
};//tc=nlogn
//sc=n
