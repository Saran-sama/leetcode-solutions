class Solution 
{
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words)
    {
        vector<int> output;
        map<char, int> charToCount;
        int maxQueryCount = 0, maxWordCount = 0;
        for (auto& query : queries)
        {
            for (auto& c : query)
            {
                charToCount[c]++;
                if (maxQueryCount < charToCount[c])
                {
                    maxQueryCount = charToCount[c];
                }
            }
            for (auto& word : words)
            {
                charToCount.clear();
                for (auto& c : word)
                {
                    charToCount[c]++;
                    if (maxWordCount < charToCount[c])
                    {
                        maxWordCount = charToCount[c];
                    }
                }
            }
            charToCount.clear();
            output.push_back(maxQueryCount < maxWordCount ? 1 : 2);
            maxQueryCount = 0;
            maxWordCount = 0;
        }
        return output;
    }
};