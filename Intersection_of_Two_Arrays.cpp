class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result;
        for (auto& num1 : nums1)
        {
            for (auto i = 0; i < nums2.size(); i++)
            {
                if (num1 == nums2[i])
                {
                    if (std::find(result.begin(), result.end(), num1) == std::end(result))
                    {
                        result.push_back(num1);
                    }
                    break;
                }
            }
        }
        return result;
    }
};