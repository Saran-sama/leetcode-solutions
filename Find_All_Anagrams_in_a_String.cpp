class Solution
{
    template <typename Map>
    bool map_compare (Map const &lhs, Map const &rhs) 
    {
        // No predicate needed because there is operator== for pairs already.
        return lhs.size() == rhs.size()
            && std::equal(lhs.begin(), lhs.end(),
                          rhs.begin());
    }    
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> output;
        map<char, int> charToCount;
        for (auto ch : p)
        {
            charToCount[ch]++;
        }

        for (int i = 0; i < (s.length() - p.length()); i++)
        {
            map<char, int> charToCountStr;
            string subStr = s.substr(i, p.length());
            for (auto ch : p=subStr)
            {
                charToCountStr[ch]++;
            }
            if (map_compare(charToCount, charToCountStr))
            {
                output.push_back(i);
            }
        }
        return output;
    }
};