class Solution {
    vector<int> init(int n)
    {
        int sqrtN = sqrt(n);
        vector<int> listOfSquares;
        for (int i = sqrtN; i >= 1; i--)
        {
            listOfSquares.push_back(i * i);
        }
        return listOfSquares;
    }
    void solve(vector<int>& list, int index, int n, int sum, int count)
    {
        if (sum == n)
        {
            if (_minCount > count)
            {
                _minCount = count;
            }
        }
        else if ((sum > n) || (index >= (list.size()-1)))
        {
            return;
        }
        for (int i = index; i < list.size(); i++)
        {
            solve(list, i, n, sum + list[i], count + 1);
        }
    }
public:
    int numSquares(int n) 
    {
        auto list = init(n);
        solve(list, 0, n, 0, 0);
        return _minCount;
    }
    int _minCount = numeric_limits<int>::max();
};