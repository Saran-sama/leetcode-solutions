class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 0)
        {
            _ways++;
            return 0;
        }
        for (int i = 1; i < 3; i++)
        {
            if (n >= i)
            {
                _list.push_back(i);
                climbStairs(n - i);
                _list.pop_back();
            }
        }
        return _ways;
    }
private:
    vector<int> _list;
    int _ways = 0;
};