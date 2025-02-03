class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int inserPoint = nums1.size() - 1;
        int xComparePoint = nums1.size() - 1 - nums2.size();
        int yComparePoint = nums2.size() - 1;
        
        while ((xComparePoint > -1) && (yComparePoint > -1))
        {
            if (nums1[xComparePoint] > nums2[yComparePoint])
            {
                nums1[inserPoint--] = nums1[xComparePoint--];
            }
            else
            {
                nums1[inserPoint--] = nums2[yComparePoint--];
            }
        }
    }
};