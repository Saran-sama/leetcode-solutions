class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) 
    {
        int start = 0, end = 0;
        map<string, int> wordsToCount;
        vector<string> output;
        for (int i = 0; i < A.size();)
        {
            while ((i < A.size()) && (A[i] != ' '))
            {
                i++;
            }
            wordsToCount[A.substr(start, i - start)]++;
            ++i;
            start = i;
        }
        start = 0;
        for (int i = 0; i < B.size();)
        {
            while ((i < B.size()) && (B[i] != ' '))
            {
                i++;
            }
            wordsToCount[B.substr(start, i - start)]++;
            ++i;
            start = i;
        }        
        
        for (auto& pair : wordsToCount)
        {
            if (pair.second == 1)
            {
                output.push_back(pair.first);
            }
        }
        return output;
    }
};