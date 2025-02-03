class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> copy(nums);
        sort(copy.begin(), copy.end());
        map<int, int> maps;
        for (int i = 0; i < copy.size(); i++)
        {
            if (maps.find(copy[i]) == maps.end())
                maps[copy[i]] = i;
        }
        vector<int> output;
        for (auto num : nums)
        {
            output.push_back(maps[num]);
        }
        return output;
    }
};