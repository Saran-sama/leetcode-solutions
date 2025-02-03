class Solution
{
    template <typename Type>
    bool isAllSpoilt(Type& type)
    {
        for (auto& row : type)
        {
            for (auto& item : row)
            {
                if ((item < 2) && (item != 0))
                {
                    return false;
                }
            }
        }
        return true;
    }

    template <typename Type>
    void printAll(Type& type)
    {
        std::cout << "\n";
        for (auto& row : type)
        {
            for (auto& item : row)
            {
                std::cout << item << ", ";
            }
            std::cout << "\n";
        }
    }

    void spoilNeighbours(int x, int y, int X, int Y, vector<vector<int>>& copyGrid)
    {
        copyGrid[x][y]++;
        if (x > 0)
        {
            if (copyGrid[x - 1][y] == 1)
                copyGrid[x - 1][y] = 2;
        }
        if (x < X)
        {
            if (copyGrid[x + 1][y] == 1)
                copyGrid[x + 1][y] = 2;
        }
        if (y > 0)
        {
            if (copyGrid[x][y - 1] == 1)
                copyGrid[x][y - 1] = 2;
        }
        if (y < Y)
        {
            if (copyGrid[x][y + 1] == 1)
                copyGrid[x][y + 1] = 2;
        }
    }
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        auto copyGrid = grid;
        bool spoiled = false;
        int counter = 0;
        do
        {
            spoiled = false;
            for (int i = 0; i < grid.size(); i++)
            {
                for (int j = 0; j < grid[i].size(); j++)
                {
                    if (grid[i][j] == 2)
                    {
                        spoilNeighbours(i, j, grid.size() - 1, grid[i].size() - 1, copyGrid);
                        spoiled = true;
                    }
                }
            }
            if (spoiled)
            {
                counter++;
            }
            grid = copyGrid;
            //printAll(grid);
        } while (spoiled);
        return isAllSpoilt(grid) ? counter - 1 : -1;
    }

};