class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        int maxLen = 1, maxWidth = 1;
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        for (int i = 1; i < horizontalCuts.size(); i++)
        {
            maxLen = max(maxLen, horizontalCuts[i] - horizontalCuts[i - 1]);
        }
        for (int i = 1; i < verticalCuts.size(); i++)
        {
            maxWidth = max(maxWidth, verticalCuts[i] - verticalCuts[i - 1]);
        }
        return maxLen * maxWidth;
    }
};