class Solution {
public:
    int rangeBitwiseAnd(int m, int n) 
    {
        int result = m;
        while (m <= n)
        {
            result = result & m;
            m++;
        }
        return result;
    }
};