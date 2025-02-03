class Solution 
{
public:
    void duplicateZeros(vector<int>& arr)
    {
        auto size = arr.size();
        vector<int> indexList(size, 0);
        int i = 0, count = 0;
        for (auto& item : arr)
        {
            indexList[i] = i + count;
            if (arr[i] == 0)
            {
                count++;
            }
            i++;
        }

        for (int i = size - 1; i >= 0; i--)
        {
            auto newIndex = indexList[i];
            if (newIndex < size)
            {
                arr[newIndex] = arr[i];
            }
        }

        for (int i = 0; i < size; i++)
        {
            if ((arr[i] == 0) && ((i + 1) < size))
            {
                arr[i + 1] = 0;
                i++;
            }
        }
        ;
    }
};