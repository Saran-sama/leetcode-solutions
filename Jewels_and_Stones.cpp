class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int jewels = 0;
        for (auto ch: J)
        {
            for (auto ch2: S)
            {
                if (ch == ch2)
                {
                    jewels++;
                }
            }
        }
        return jewels;
    }
};