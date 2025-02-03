class Solution {

    void push(stack<int>& stk, int item)
    {
        if (stk.empty())
        {
            stk.push(item);
            return;
        }
        if (isOppositeSign(stk.top(), item))
        {
            if (abs(stk.top()) < abs(item))
            {
                stk.pop();
                push(stk, item);
            }
            else if (abs(stk.top()) == abs(item))
            {
                stk.pop();
            }
        }
        else
        {
            stk.push(item);
        }       
    }

    bool isOppositeSign(int x, int y)
    {
        if ((x > 0) && (y < 0))
        {
            return true;
        }
        else if((x < 0) && (y > 0))
        {
            return true;
        }
        return false;
    }
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int> stk{};
        for (auto item : asteroids)
        {
            push(stk, item);
        }
        vector<int> result(stk.size());
        int i = result.size() - 1;
        while (stk.size())
        {
            result[i--]= stk.top();
            stk.pop();
        }
        return result;
    }
};