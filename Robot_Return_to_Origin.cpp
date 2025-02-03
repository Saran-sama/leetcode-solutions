class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int x = 0, y = 0;
        for (auto& move : moves)
        {
            if (move == 'U')
            {
                y++;
            }
            else if (move == 'D')
            {
                y--;
            }
            else if (move == 'R')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
        
        if ((x != 0) || (y != 0 ))
            return false;
        return true;
    }
};