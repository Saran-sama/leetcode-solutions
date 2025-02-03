class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> output;
        map<int, int> listA;
        for (auto& item : nums1)
        {
            listA[item]++;
        }
        map<int, int> listB;
        for (auto& item : nums2)
        {
            listB[item]++;
        }        
        
        auto itr1 = listA.begin();
        while (itr1 != listA.end())
        {
            while (listA[itr1->first])
            {
                if (listB.find(itr1->first) != listB.end())
                {
                    output.push_back(itr1->first);
                    listB[itr1->first]--;
                    if (!listB[itr1->first])
                    {
                        listB.erase(itr1->first);
                    }
                }
                listA[itr1->first]--;
            }
            itr1++;
            if (!listB.size())
            {
                break;
            }
        }
        return output;
    }
};