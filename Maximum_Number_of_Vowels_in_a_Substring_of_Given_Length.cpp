class Solution
{
public:
    int maxVowels(string s, int k)
    {
        set<char> list{ 'a', 'e', 'i', 'o', 'u' };
        int sum = 0, max = 0, max_index = 0;
        int i = 0;
        if (s.size() >= k)
        {
            for (i = 0; i < k; i++)
            {
                if (list.find(s[i]) != list.end())
                {
                    sum++;
                }
            }
            if (sum > max)
            {
                max = sum;
                max_index = i;
            }
        }
        for (int j = i, k = 0; j < s.size(); j++, k++)
        {
            if (list.find(s[k]) != list.end())
            {
                sum--;
            }
            if (list.find(s[j]) != list.end())
            {
                sum++;
            }
            if (sum > max)
            {
                max = sum;
                max_index = j;
            }
        }
        return max;
    }
};