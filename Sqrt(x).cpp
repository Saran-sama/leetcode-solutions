class Solution {
public:
    int mySqrt(int x) 
    {
        for (int i = 1; i < x; i++)
        {
            if ((i * i) > x)
            {
                return i - 1;
            }
        }
        return -1;
    }
};