class Solution {

    int evalPRNHelper(int left, int right, string op)
    {
        if (op == "+")
        {
            return left + right;
        }
        else if (op == "-")
        {
            return left - right;
        }
        else if (op == "*")
        {
            return left * right;
        }
        else
        {
            return left / right;
        }
    }
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<string> stk{};
        for (auto& token : tokens)    
        {
            if ((token == "+") || (token == "*") || (token == "-") || (token == "/"))
            {
                int right = stoi(stk.top());
                stk.pop();
                int left = stoi(stk.top());
                stk.pop();
                stk.push(std::to_string(evalPRNHelper(left, right, token)));
            }
            else
            {
                stk.push(token);
            }
        }
        return stoi(stk.top());
    }
};