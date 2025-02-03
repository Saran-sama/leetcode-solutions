class Solution 
{
public:
    string addBinary(string a, string b)
    {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string output = "";
        string carry = "0";
        int j = 0;
        for (int i = 0; (i < a.size()) && (i < b.size()); i++)
        {
            carry += a[i];
            carry += b[i];
#if 1
            //for (auto c : carry)
            {
                auto cnt = count(carry.begin(), carry.end(), '1');

                if (cnt == 1)
                {
                    carry = "0";
                    output += "1";
                }
                else if (cnt == 2)
                {
                    carry = "1";
                    output += "0";
                }
                else if (cnt == 3)
                {
                    carry = "1";
                    output += "1";
                }
                else
                {
                    carry = "0";
                    output += "0";
                }
            }
#endif
            j = i;
        }
#if 1
        for (int i = j + 1; i < a.size(); i++)
        {
            carry += a[i];
            auto cnt = count(carry.begin(), carry.end(), '1');
            if (cnt == 1)
            {
                carry = "0";
                output += "1";
            }
            else if (cnt == 2)
            {
                carry = "1";
                output += "0";
            }
            else
            {
                carry = "0";
                output += "0";
            }
        }
        for (int i = j + 1; i < b.size(); i++)
        {
            carry += b[i];
            auto cnt = count(carry.begin(), carry.end(), '1');
            if (cnt == 1)
            {
                carry = "0";
                output += "1";
            }
            else if (cnt == 2)
            {
                carry = "1";
                output += "0";
            }
            else
            {
                carry = "0";
                output += "0";
            }
        }
#endif
        if (carry == "1")
        {
            output += "1";
        }
        reverse(output.begin(), output.end());

        return output;
    }
};