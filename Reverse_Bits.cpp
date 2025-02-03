class Solution {
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t newN = 0;
        int leftShift = 31;
        while (n)
        {
            if (1 & n)
            {
                newN = newN | (1 << leftShift);
            }
            n = n >> 1;
            leftShift--;
        }
        return newN;
    }
};