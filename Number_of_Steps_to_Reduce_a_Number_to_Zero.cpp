class Solution {
public:
    int numberOfSteps (int num) 
    {
        int steps = 0;
        while (num)
        {
            if (num % 2)
            {
                num--;
            }
            else
            {
                num = num / 2;
            }
            steps++;
        }
        return steps;
    }
};