class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int m=0;int n=numbers.size()-1;
      while(m<n)
      {   
          if(numbers[m]+numbers[n]==target)
            break;  
        if(numbers[m]+numbers[n]>target)
            n--;
            else m++;
          
      }  
      vector<int>ans;
      ans.push_back(m+1);
      ans.push_back(n+1);
      return ans;
    }
};
