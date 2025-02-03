class Solution
{
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int size = matrix.size() - 1;

        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size - i; j++)
            {
                int* a = &matrix[i][j];
                int* b = &matrix[j][size - i];
                int* c = &matrix[size - i][size - j];
                int* d = &matrix[size - j][i];

                auto temp = *a;
                *a = *d;
                *d = *c;
                *c = *b;
                *b = temp;
                for (int i = 0; i < matrix.size(); i++)
                {
                    for (int j = 0; j < matrix.size(); j++)
                    {
                        std::cout << matrix[i][j] << ", ";
                    }
                    std::cout << "\n";
                }
            }
        }
    }
};