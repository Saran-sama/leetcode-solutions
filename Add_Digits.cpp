class Solution {
public:
    int addDigits(int num) 
    {
        int result = 0;
        while (num)
        {
            while (num)
            {
                int remainder = num % 10;
                result = result + remainder;
                num = num / 10;
            }
            num = result;
            result = 0;
            if ((num % 10) == num)
            {
                return num;
            }
        }
        return num;
    }
};