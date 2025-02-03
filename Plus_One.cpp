class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int> output;
        stack<int> nums;
        int reminder = 0;
        int i = digits.size() - 1;
        int numToAdd = 1;
        do
        {
            auto sum = digits[i] + numToAdd;
            numToAdd = sum / 10;
            nums.push(sum % 10);
            i--;
        }while(i >= 0);
        if (numToAdd)
        {
            nums.push(numToAdd);
        }
        while (nums.size())
        {
            output.push_back(nums.top());
            nums.pop();
        }
        return output;
    }
};