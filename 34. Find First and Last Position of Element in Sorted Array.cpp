class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int f1 = 0;
        int f2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
                f1 = 1;
                break;
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == target) {
                ans.push_back(i);
                f2 = 1;
                break;
            }
        }int z=-1;
        if(f1==0)
        ans.push_back(z);
        if(f2==0)
        ans.push_back(z);
        return ans;
    }
};
//tc=O(N)



// class Solution {
// public:
//     vector<int> searchRange(vector<int>& v, int key) {
//         int left = binarySearch(v, key, true);
//         int right = binarySearch(v, key, false);
//         return {left, right};
//     }

// private:
//     int binarySearch(const vector<int>& v, int key, bool findLeft) {
//         int start = 0;
//         int end = v.size() - 1;
//         int res = -1;
//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (v[mid] == key) {
//                 res = mid;
//                 if (findLeft) {
//                     end = mid - 1;
//                 } else {
//                     start = mid + 1;
//                 }
//             } else if (key < v[mid]) {
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         }
//         return res;
//     }
// };
//tc=log(N)
