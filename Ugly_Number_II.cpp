class Solution {
public:
    int nthUglyNumber(int n) 
    {
        set<int> list;
        list.insert(1);
        int num = 2;
        for (int i = 1; i < n; i++)
        {
            list.emplace(i * num);
        }
        num = 3;
        for (int i = 1; i < n; i++)
        {
            list.emplace(i * num);
        }
        num = 5;
        for (int i = 1; i < n; i++)
        {
            list.emplace(i * num);
        } 
        auto itr = list.begin();
        int i = 1;
        while (i < n)
        {
            itr++;
            i++;
        }
        return *itr;
    }
};