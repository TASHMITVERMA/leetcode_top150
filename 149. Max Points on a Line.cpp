class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int size = points.size();
        int maxSlope = 0;
        unordered_map<double, int> ump;
        for(int i = 0 ; i < size; i++){
            for(int j = 0; j < size; j++){
                double x1 = points[j][0];
                double x2 = points[i][0];
                double y1 = points[j][1];
                double y2 = points[i][1];

                if(y2 == y1 && x2 == x1)
                    continue;
                else if(x2 == x1)
                    ump[INT_MAX]++;
                else{
                    double slope = (y2 - y1) / (x2 - x1);
                    ump[slope]++;
                }
            }

            int currMax = 0;
            for(auto elem : ump){
                currMax = max(currMax, elem.second);
            }
            maxSlope = max(maxSlope, currMax);
            ump.clear();
        }
        return maxSlope + 1;
    }
};//O(N2)
