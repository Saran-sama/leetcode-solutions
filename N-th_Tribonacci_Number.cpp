class Solution 
{
public:
    Solution()
    {
        _tribonacciNums[0] = 0;
        _tribonacciNums[1] = 1;
        _tribonacciNums[2] = 1;
    }
    int tribonacci(int n) 
    {
        if (_tribonacciNums.find(n) == _tribonacciNums.end())
        {
             _tribonacciNums[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
        }
        return _tribonacciNums[n];
    }
    map<int, int> _tribonacciNums;
};