class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> nums1_list{nums1.begin(), nums1.end()};
        set<int> nums2_list{nums2.begin(), nums2.end()};


        vector<int> list{};
        for (auto item: nums1_list)
        {
            if (nums2_list.find(item) == nums2_list.end())
            {
                list.push_back(item);
            }
        }

        vector<vector<int>> result{list};
        list.clear();
        for (auto item: nums2_list)
        {
            if (nums1_list.find(item) == nums1_list.end())
            {
                list.push_back(item);
            }
        }
        result.push_back(list);
        return result;    
    }
};