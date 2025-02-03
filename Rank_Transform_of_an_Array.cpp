class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        vector<int> output;
        for (int i = 0; i < arr.size(); i++)
        {
            int count = 1;
            for (int j = 0; j < arr.size(); j++)
            {
                if (arr[i] > arr[j])
                {
                    count++;
                }
            }
            output.push_back(count);
        }
        return output;
    }
};