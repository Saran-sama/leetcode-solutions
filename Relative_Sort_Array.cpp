class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        unordered_map<int, int> valCount;
        for (auto& item : arr2)
        {
            valCount[item]++;
        }
        vector<int> output;
        for (auto& item: arr1)
        {
            if (valCount.find(item) != valCount.end())
                valCount[item]++;
        }
        for (auto& item: arr2)
        {
            if (valCount[item])
            {
                while (--valCount[item])
                {
                    output.push_back(item);
                }
            }
        }
        
        for (auto&item : arr1)
        {
           if (valCount.find(item) == valCount.end())
           {
               output.push_back(item);
           }
        }
        return output;
    }
};