class Solution {
    int helper(vector<int>& nums, int target, int left, int right)
    {
        if (_list.find(make_pair(left, right)) != _list.end())
        {
            return -1;
        }
        _list.insert(make_pair(left, right));
        if (left >= right)
        {
            return nums[left] == target? left : -1;
        }
        int mid = (right - left)/2 + left;
        if (nums[mid] < target)
        {
            return helper(nums, target, mid, right);
        }
        else if (nums[mid] > target)
        {
            return helper(nums, target, left, mid - 1);
        }
        else
        {
            return mid;
        }
        
    }
public:
    int search(vector<int>& nums, int target) 
    {
        return helper(nums, target, 0, nums.size()-1);
    }
    set<pair<int, int>> _list;
};