class Solution 
{
    void helper(vector<vector<int>>& mat, int row, int sum, vector<int>& output)
    {
        if (row < _row)
        {
            for (int i = 0; i < _col; i++)
            {
                helper(mat, row + 1, sum + mat[row][i], output);
            }
        }
        else
        {
            output.push_back(sum);
        }
    }
public:
    int kthSmallest(vector<vector<int>>& mat, int k)
    {
        vector<int> output;
        _row = mat.size();
        _col = mat[0].size();
        helper(mat, 0, 0, output);
        sort(output.begin(), output.end());

        return output[k - 1];
    }
    int _row = 0;
    int _col = 0;
};