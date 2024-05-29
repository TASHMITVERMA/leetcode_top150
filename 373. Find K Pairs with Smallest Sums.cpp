class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        if (nums1.empty() || nums2.empty() || k == 0) 
            return ans;
        auto cmp = [&](pair<int, int>& a, pair<int, int>& b) {
            return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> minHeap(cmp);
        for (int i = 0; i < nums1.size() && i < k; ++i)
            minHeap.emplace(i, 0);
        while (k-- > 0 && !minHeap.empty()) {
            auto [i, j] = minHeap.top();
            minHeap.pop();
            ans.push_back({nums1[i], nums2[j]});
            if (j + 1 < nums2.size())
                minHeap.emplace(i, j + 1);
        }
        return ans;
    }
};




// class Solution {
// public:
//     vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//         vector<vector<int>> ans;
//         for (int i = 0; i < nums1.size() && i < k; i++) {
//             for (int j = 0; j < nums2.size() && j < k; j++) {
//                 ans.push_back({nums1[i], nums2[j]});
//                 }}
//         sort(ans.begin(), ans.end(), [](const vector<int>& a, const vector<int>& b) {
//             return a[0] + a[1] < b[0] + b[1];
//         });
//         if (ans.size() > k) {
//           ans.erase(ans.begin() + k, ans.end());
//         }
//         return ans;
//     }
// };
// //time complexity=O(k2*logk)
// //space error-O(K2)
