class Solution {
public:

    vector<int> countBits(int num) 
    {
        vector<int> list(num + 1, 0);
        list[0] = 0;
        list[1] = 1;
        list[2] = 1;
        if (num <= 2)
        {
            return list;
        }
        list[3] = 2;
        int index = 0;
        for (int i = 4; i < num; i++)
        {
            if (i & (i - 1))
            {
                list[i] = list[index++] + 1;
            }
            else
            {
                index = 0;
                list[i] = list[index++] + 1;
            }
        }
        return list;
    }
};