class Solution {
public:
    int reverse(int x) 
    {
        int mul = 1;
        if (x < 0)
        {
            mul = -1;
        }
        
        int output = 0;
        int factor = 1;
        while (x)
        {
            output *= factor;
            factor = 10;
            output += x % 10;
            x = x/10;
        }
        return output * mul;
    }
};