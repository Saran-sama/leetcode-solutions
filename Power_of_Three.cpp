class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if (n % 3)
        {
            return false;
        }
        while (n >= 3)
        {
            n = n / 3;
        }
        return n == 1;
    }
};