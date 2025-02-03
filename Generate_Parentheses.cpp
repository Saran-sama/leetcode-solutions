
class Stack
{
    public:
    Stack(string& s)
    {
        for (auto item: s)
        {
            push(item);
        }
    }
    void push(char c)
    {
        if (stk.empty())
        {
            stk.push(c);
            str += c;
        }
        else
        {
            if ((stk.top() == '(') && (c == ')'))
            {
                stk.pop();
                str += c;
                return;
            }
            stk.push(c);
            str += c;
        }
    }
    bool isEmpty()
    {
        return stk.empty();
    }

    string& getStr()
    {
        return str;
    }    
    private:
    stack<char> stk{};
    string str{};
};

class Solution 
{

    void gen(string str, vector<string>& result)
    {
        if (str.size() == (_size*2))
        {
            Stack s{str};
            if (s.isEmpty())
            {
                result.push_back(s.getStr());
            }
            return;
        }
        else
        {
            gen(str + "(", result);
            gen(str + ")", result);
        }
    }    
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> result{};
        _size = n;
        gen("", result);
        return result;
    }
    int _size{};
};