class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> list;
        for (int i = 1; i <= n; i++)
        {
            if ((i % 3) && (i % 5))
            {
                list.push_back(to_string(i));
            }
            else if (i % 5)
            {
                list.push_back("Fizz");
            }
            else if (i % 3)
            {
                list.push_back("Buzz");
            }
            else
            {
                list.push_back("FizzBuzz");
            }
        }
        return list;
    }
};