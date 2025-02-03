class Solution {
public:
    bool isHappy(int n) 
    {
        set<int> nums;
        int newN = 0;
        while(nums.find(n) == nums.end())
        {
            nums.insert(n);
            while (n)
            {
                newN += (n % 10) * (n % 10);
                n = n / 10;
            }
            n = newN;
            newN = 0;
            if (n == 1)
            {
                return true;
            }
        }
        return false;
    }
};