class Solution {
public:
    int maximum69Number (int num) 
    {
        string str = to_string(num);
        int i = 0;
        while (str[i] != '6')
        {
            i++;
        }
        if (str[i] == '6')
        {
            str[i] = '9';
            return stoi(str);
        }
        return num;
    }
};