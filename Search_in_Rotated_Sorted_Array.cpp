class Solution 
{
    int findPivot(vector<int>& nums, int left, int right)
    {
        int mid = ((right - left)/2) + left;
        if (nums[mid] > nums[mid+1])
        {
            return mid + 1;
        }
        else if (nums[left] < nums[mid])
        {
            return findPivot(nums, mid, right);
        }
        else
        {
            return findPivot(nums, left, mid - 1);
        }
    }
public:
    int search(vector<int>& nums, int target) 
    {
        auto pivot = 0;
        if (nums[0] > nums[nums.size()-1])
        {
            pivot = findPivot(nums, 0, nums.size() - 1);
        }
        if ((target >= nums[pivot]) && (target <= nums[nums.size()-1]))
        {
            if (binary_search(nums.begin() + pivot, nums.end(), target))
            {
                auto low = lower_bound(nums.begin() + pivot, nums.end(), target);
                return low - nums.begin() ;
            }
            else
            {
                auto low = lower_bound(nums.begin(), nums.begin() + pivot, target);
                return low - nums.begin();
            }
        }
        return -1;
    }
};