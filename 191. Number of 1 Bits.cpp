class Solution {
public:
    int hammingWeight(int n) {
        int d=0,c=0;
        while(n!=0)
        {
            
            d=n%2;
            if(d==1)
            c++;
            n=n/2;
        }
        return c;}
//   int s = 0;
//         while (n != 0) {
//             n &= (n - 1);
//             cout<<n<<endl;
//             s++;
//         }
//         return s;
//     }
};
