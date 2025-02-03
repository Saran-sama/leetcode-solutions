class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
        unordered_map <int, int> manToJudge;
        for (auto& pair: trust)
        {
            manToJudge[pair[0]] = pair[1];
        }
        int totalJudges = 0;
        
        for (int i = 1; i <= N; i++)
        {
            if (manToJudge[i] == 0)
            {
                totalJudges++;
            }
            if (totalJudges > 1)
            {
                return -1;
            }
        }
        
        for (int i = 1; i <= N; i++)
        {
            if (manToJudge[i] == 0)
            {
                return i;
            }
        }
        return -1;
    }
};