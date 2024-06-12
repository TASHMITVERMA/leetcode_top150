class Solution {
public:
    int mySqrt(int x) {
        long long n=x;
        if(x==0)
        return 0;
        for(long long i=1;i<=n;i++)
            {if(i*i==n)
            return i;
                else if(i*i>n)
            return i-1;
            }    
        return 1;   
    }
};
