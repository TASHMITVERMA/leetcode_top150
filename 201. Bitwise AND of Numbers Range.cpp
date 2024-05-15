class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
          while (left < right) {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        return left << shift;
    }
};
//complexity log n
//5=0101
//7=0111
