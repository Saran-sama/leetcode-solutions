class Solution
{
    int findIndexWithBinarySearch(vector<int>& nums, int left, int right, int target)
    {
        if (left < right)
        {

            int mid = ((right - left) / 2) + left;
            if (nums[mid] < target)
            {
                return findIndexWithBinarySearch(nums, mid, right, target);
            }
            else if (nums[mid] > target)
            {
                return findIndexWithBinarySearch(nums, left, mid, target);
            }
            else
            {
                return mid;
            }
        }
        else
        {
            if (nums[left] != target)
            {
                return -1;
            }
        }
        return -1;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int index = findIndexWithBinarySearch(nums, 0, nums.size() - 1, target);
        int leftIndex = 0;
        int rightIndex = 0;
        auto prev = nums[index];
        for (int i = index; i >= 0; i--)
        {
            if (prev != nums[i])
            {
                break;
            }
            leftIndex = i;
        }
        for (int i = index; i < nums.size(); i++)
        {
            if (prev != nums[i])
            {
                break;
            }
            rightIndex = i;
        }
        return { leftIndex, rightIndex };
    }
};