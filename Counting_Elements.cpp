class Solution {
public:
    int countElements(vector<int>& arr) 
    {
        unordered_set<int> list;
        for (auto&item : arr)
        {
            list.insert(item);
        }
        int count = 0;
        for (auto&item : arr)
        {
            if (list.find(item + 1) != list.end())
            {
                count++;
            }
        }
        return count;
    }
};