class Solution
{
public:
    int maxOperations(vector<int>& nums, int k)
    {
        map<int, int> my_map{};

        for (auto item : nums)
        {
            my_map[item]++;
        }

        int counter = 0;
        for (auto item : nums)
        {
            if ((my_map[item] > 0) && (my_map.find(k - item) != my_map.end()))
            {
                my_map[item]--;
                if (my_map[k - item] > 0)
                {
                    counter++;
                    my_map[k - item]--;
                }
                else
                {
                    my_map[item]++;
                }
            }
        }
        return counter;
    }
};