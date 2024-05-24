class Solution {
public:
    int maxArea(vector<int>& height) {
        int marea=0;
        int l=0;
        int r=height.size()-1;
        while(l<r)
        {
            int area=(r-l)*min(height[r],height[l]);
            marea=max(marea,area);
            if(height[l]<height[r])
            l+=1;
            else
            r-=1;
        }
        return marea;
    }
};
//tc=O(N)
//sc=O(1)
//algo=sliding window
