class Solution 
{
public:
    string intToRoman(int num) 
    {
        string output = "";
        while (num >= 1000)
        {
            output += 'M';
            num -= 1000;
        }
        if ((num >= 900) && (num <= 999))
        {
            output.insert(output.length() - 2, "C");
            num -= 900;
        }        
        while (num >= 500)
        {
            output += 'D';
            num -= 500;
        }
        if ((num >= 400) && (num <= 499))
        {
            output.insert(output.length() - 2, "C");
            num -= 400;
        }
        while (num >= 100)
        {
            output += 'C';
            num -= 100;
        }
        if ((num >= 90) && (num <= 99))
        {
            output.insert(output.length() - 2, "X");
            num -= 90;
        }
        while (num >= 50)
        {
            output += 'L';
            num -= 50;
        }
        if ((num >= 40) && (num <= 49))
        {
            output.insert(output.length() - 2, "X");
            num -= 40;
        }  
        while (num >= 10)
        {
            output += 'X';
            num -= 10;
        }
        if (num == 9)
        {
            output.insert(output.length() - 2, "I");
            num -= 9;
        }        
        while (num >= 5)
        {
            output += 'V';
            num -= 5;
        }
        if (num == 4)
        {
            output.insert(output.length() - 2, "I");
            num-=4;
        }
        while (num)
        {
            output += 'I';
            num--;
        }
        return output;
    }
};