class Solution {
public:
    bool backspaceCompare(string S, string T) 
    {
        stack<char> Slist;
        stack<char> Tlist;
        
        for (auto& ch : S)
        {
            if (ch != '#')
            {
                Slist.push(ch);
            }
            else
            {
                Slist.pop();
            }
        }
        
        for (auto& ch : T)
        {
            if (ch != '#')
            {
                Tlist.push(ch);
            }
            else
            {
                Tlist.pop();
            }
        }  
        return Slist == Tlist;
    }
};