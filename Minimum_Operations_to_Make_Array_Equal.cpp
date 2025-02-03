class Solution {
public:
    int minOperations(int n) 
    {
        int out = 2;
        int sum = 0;
        while (n / 2)
        {
            sum += out;
            out = out*2;
            n = n / 2;
        }
        return sum;
    }
};