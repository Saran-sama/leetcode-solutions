class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        if ((target < nums[0]) || (nums.size() == 0))
        {
            return 0;
        }
        int right = nums.size();
        int left = 0;
        int mid = 0;
        int prevLeft = left;
        int prevRight = right;
        while (left < right)
        {
            mid = ((right - left)/2) + left;
            if (nums[mid] < target)
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
            if ((prevRight == right) && (prevLeft == left))
            {
                break;
            }
            prevRight = right;
            prevLeft = left;
        }
        return mid + 1;
    }
};