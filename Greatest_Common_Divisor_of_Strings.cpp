class Solution
{
    bool gcdHelper(string& min, string& str1, string& str2)
    {
        int i;
        for (i = 0; i < str1.size();)
        {
            int j;
            for (j = 0; j < min.size(); j++)
            {
                if (str1[i++] != min[j])
                {
                    return false;
                }
            }

            if (j < min.size()) return false;
        }

       
        for (i = 0; i < str2.size();)
        {
            int j;
            for (j = 0; j < min.size(); j++)
            {
                if (str2[i++] != min[j])
                {
                    return false;
                }
            }
            if (j < min.size()) return false;
        }
        return true;
    }
public:
    string gcdOfStrings(string str1, string str2)
    {
        string minStr = str1.size() < str2.size() ? str1 : str2;
        string backUpMinStr = minStr;
        int i = 1;
        do
        {
            i++;
            if (gcdHelper(minStr, str1, str2))
            {
                return minStr;
            }
            minStr = backUpMinStr.substr(0, backUpMinStr.size() / i);
        } while (minStr.size());
        return "";
    }
};