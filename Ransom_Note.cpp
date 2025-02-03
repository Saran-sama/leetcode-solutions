class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        vector<char> mag(26, 0);
        vector<char> ranNote(26, 0);
        for (auto&ch : magazine)
        {
            mag[ch - 'a']++;
        }
        
        for (auto& ch: ransomNote)
        {
            ranNote[ch - 'a']++;
        }
        
        for (int i = 0; i < 26;i++)
        {
            if (ranNote[i] > mag[i])
                return false;
        }
        return true;
    }
};