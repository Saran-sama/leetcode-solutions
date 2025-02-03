class Solution {
public:
    string defangIPaddr(string address)
    {
        string newStr;
        for (auto ch : address)
        {
            if (ch == '.')
            {
                newStr += "[.]";
                continue;
            }
            newStr += ch;
        }
        return newStr;
    }
};