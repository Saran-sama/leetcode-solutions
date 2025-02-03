class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        for (int i = 0; i < trips.size(); i++)
        {
            auto numOfPass = trips[i][0];
            for (int j = i + 1; j < trips.size(); j++)
            {
                if (trips[i][1] > trips[j][1])
                {
                    return false;
                }
                if (trips[i][2] > trips[j][1])
                {
                    numOfPass += trips[j][0];
                    if (numOfPass > capacity)
                    {
                        return false;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        return true;
    }
};