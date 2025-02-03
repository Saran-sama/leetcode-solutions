class Solution 
{
    void helper(vector<vector<int>>& output, int index, int depth, vector<int>& list)
    {
        if (depth > _depth)
        {
            output.push_back(list);
            return;
        }
        for (int i = index; i <= _width; i++)
        {
            list.push_back(i);
            helper(output, i + 1, depth + 1, list);
            list.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) 
    {
        _depth = k;
        _width = n;
        vector<vector<int>> output;
        vector<int> list;
        helper(output, 1, 1, list);
        return output;
    }
private:
    int _depth, _width ;
};