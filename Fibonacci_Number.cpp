class Solution {
public:
    int fib(int N) 
    {
        int first = 0;
        int second = 1;
        for (int i = 3; i <= N; i++)
        {
            auto third = first + second;
            first = second;
            second = third;
        }
        return second;
    }
};