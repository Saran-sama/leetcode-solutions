class Solution {
public:
    vector<string> printVertically(string s) 
    {
        vector<string> input;
        vector<string> output;
        int maxWordLen = 0;
        string word;
        for (int i = 0 ; i < s.size(); i++)
        {
            if ((s[i] == ' ') || (i == (s.size() - 1)))
            {
                if (word.size() > maxWordLen)
                {
                    maxWordLen = word.size();
                }
                if (i == (s.size() - 1))
                {
                    word += s[i];
                }
                input.push_back(word);
                word = "";
                continue;
            }
            word += s[i];
        }
        
        for (int i = 0; i < maxWordLen; i++)
        {
            string outWord;
            for (auto& word : input)
            {
                if (word.size() > i)
                {
                    outWord += word[i];
                }
                else
                {
                    outWord += ' ';
                }
            }
            output.push_back(outWord);
        }
        return output;
    }
};