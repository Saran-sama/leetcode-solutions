class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        priority_queue<int, vector<int>, std::greater<int>> list;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                list.push(matrix[i][j]);
            }
        }
        while (--k)
        {
            list.pop();
        }
        return list.top();
    }
};