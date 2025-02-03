class Solution
{

    template <typename Type>
    int getVal(int index, Type& list)
    {
        index = index % (list.size());
        return list[index];
    }


public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int i = 0;
        while (i < gas.size())
        {
            while (gas[i] < cost[i])
            {
                i++;
            }

            int gasRemain = 0;
            int start = i;
            int end = i + gas.size();
            for (int j = start; j < end; j++)
            {
                gasRemain += getVal(j, gas);
                gasRemain -= getVal(j, cost);
                if (gasRemain < 0)
                {
                    break;
                }
            }
            if (gasRemain >= 0)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
};