class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int, int> num_to_occurences{};
        for (auto item: arr)
        {
            num_to_occurences[item]++;
        }

        vector<int> output{};
        for (auto const& [key, val] : num_to_occurences)
        {
            output.push_back(val);
        }

        std::sort(output.begin(), output.end());

        if (output.size())
        {
            int prev = output[0];
            for (int i = 1; i < output.size(); i++)
            {
                if (output[i] == prev)
                {
                    return false;
                }
                prev = output[i];
            }
        }
        return true;
    }
};