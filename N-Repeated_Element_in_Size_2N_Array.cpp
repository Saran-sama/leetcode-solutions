class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        vector<int> list(10000, 0);
        int size = A.size() / 2;
        for (auto& item : A)
        {
            list[item]++;
            if (list[item] == size)
            {
                return item;
            }
        }
        return 0;
    }
};