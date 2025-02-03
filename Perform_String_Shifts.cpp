class Solution 
{
public:
    string stringShift(string s, vector<vector<int>>& shift)
    {
        int finalPos = 0;
        int len = s.length();
        for (auto& item : shift)
        {
            if (item[0] == 0)
            {
                finalPos -= item[1];
            }
            else
            {
                finalPos += item[1];
            }
        }
        finalPos = finalPos % len;

        string output;
        if (finalPos > 0)
        {
            output = output + s.substr(len - finalPos, finalPos);
            output = output + s.substr(0, len - finalPos);
        }
        else if (finalPos < 0)
        {
            output = output + s.substr(0, len - finalPos);
            output = output + s.substr(len - finalPos, finalPos);
        }
        else
        {
            return s;
        }

        return output;
    }
};