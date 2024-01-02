class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int reverse = 0;

        for (int i = 0; i < 32; i++)
        {
            reverse = reverse << 0x1;
            reverse |= (n & 0x1);
            n = n >> 0x1;
        }

        return reverse;
    }
};