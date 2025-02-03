class Solution {
public:
    int bitwiseComplement(int N)
    {
        int result = 0;
        int pos = 0;
        while (N)
        {
            auto tempRes = !(N % 2);
            result = result | tempRes;
            result = result << 1;
            N = N / 2;
        }
        result = result >> 1;
        return result;
    }
};