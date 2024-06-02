class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long result = 0;

        for (int i = 0; i<32; i++) {
            // Extracting the least significant bit
            long long leastSignificantBit = n & 1;

            // Right shifting the number
            n = n >> 1;

            // Left shifting the number 
            result = result << 1;

            // Updating the least significant bit
            result = result | leastSignificantBit;
        }

        return result;
    }
};
        
