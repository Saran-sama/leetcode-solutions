class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int max_altitude = 0;
        int sum = 0;
        for (auto item: gain)
        {
            sum += item;
            if (sum > max_altitude)
            {
                max_altitude = sum;
            }
        }
        return max_altitude;
    }
};