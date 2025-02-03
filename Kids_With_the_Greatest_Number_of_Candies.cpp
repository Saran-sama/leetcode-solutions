class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        auto max = 0;
        for (auto item: candies)
        {
            if (item > max)
            {
                max = item;
            }
        }

        vector<bool> result;
        for (auto item : candies)
        {
            if ((item + extraCandies) >= max)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};