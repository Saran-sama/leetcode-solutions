class Solution
{
public:
    string reverseVowels(string s)
    {
        int left = 0;
        int right = s.size() - 1;
        set<char> list{ 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        while (left < right)
        {
            while (list.find(s[right]) == list.end())
            {
                right--;
				if (left >= right)
				{
					break;
				}
            }

            while (list.find(s[left]) == list.end())
            {
                left++;
				if (left >= right)
				{
					break;
				}
            }
            if (left >= right)
            {
                return s;
            }
            std::swap(s[left], s[right]);
            right--;
            left++;
        }
        return s;

    }
};