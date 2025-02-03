class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        vector<vector<int>> output;
        sort(arr.begin(), arr.end());
        int min = numeric_limits<int>::max();
        for (int i = 0; i < arr.size();i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                auto diff = abs(abs(arr[i]) -abs(arr[j]));
                if (diff < min)
                {
                    min = diff;
                }
            }
        }
        for (int i = 0; i < arr.size();i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                auto diff = abs(abs(arr[i]) -abs(arr[j]));
                if (diff == min)
                {
                    output.push_back({arr[i], arr[j]});
                }
            }
        }
        return output;
    }
};