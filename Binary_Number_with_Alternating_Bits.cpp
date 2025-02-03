class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        bool flag = n % 2;
        n = n / 2;
        while (n)
        {
            if ((n % 2) == flag)
            {
                return false;
            }
            flag = n % 2;
            n = n / 2;
        }
        return true;
    }
};