class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        map<int, int> _counter;
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            _counter[nums[i]]++;
            if (_counter[nums[i]] > 2)
            {
                --j;
                _counter[nums[i]]--;
            }
            nums[j] = nums[i];
            j++;
        }
        return j;
    }
};