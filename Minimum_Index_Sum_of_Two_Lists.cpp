class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        int leastIndexSum = numeric_limits<int>::max();
        string output;
        for (int i = 0; i < list1.size(); i++)
        {
            for (int j = 0; j < list2.size(); j++)
            {
                if ((list1[i] == list2[j]) && ((i + j) < leastIndexSum))
                {
                    output = list1[i];
                }
            }
        }
        return { output };
    }
};