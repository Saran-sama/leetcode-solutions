class Solution 
{
    bool isUpper(char ch)
    {
        if ((ch >= 65) && (ch <= 90))
        {
            return true;
        }
        return false;
    }
    
    int countUppers(string& word)
    {
        int count = 0;
        for (auto ch: word)
        {
            if (isUpper(ch))
            {
                count++;
            }
        }
        return count;
    }
public:
    bool detectCapitalUse(string word) 
    {
        auto count = countUppers(word);
        if ((isUpper(word[0])) && (count == 1))
        {
            return true;
        }
        else if (count == 0)
        {
            return true;
        }
        else if (count == word.size())
        {
            return true;
        }
        return false;
    }
};