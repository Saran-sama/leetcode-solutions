class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        string str;
        while (k)
        {
            string temp = "0";
            if ((k & 1))
            {
                temp = "1";
            }
            str = str + temp;
            k = k >> 1;
        }
        return s.find(str) != std::string::npos;
    }
};