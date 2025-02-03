class Solution {
public:
    bool isPowerOfFour(int num) 
    {
        auto expected = sqrt(sqrt(num));
        return pow(expected, 4) == num;
    }
};