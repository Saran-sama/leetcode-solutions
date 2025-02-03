class Solution 
{

public:
    string largestTimeFromDigits(vector<int>& A) 
    {
        if (A.size() != 4)
        {
            return "";
        }
        string input = "";
        for (int c: A)
        {
            input += to_string(c);
        }
        sort(input.begin(), input.end());
        for (int i = 23; i >=0; i--)
        {
            string hr = to_string(i);
            for (int j = 59; j >= 0; j--)
            {
                string time = hr + to_string(j);
                sort(time.begin(), time.end());
                if (input == time)
                {
                    return hr + ":" + to_string(j);
                }
            }
        }
        return "";
    }
};