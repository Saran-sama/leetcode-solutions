class Solution 
{
    bool canPlaceFlowersHelper(vector<int>& flowerbed, int n, int index)
    {
        if (n == 0)
        {
            return true;
        }
        if ((n + index) >= flowerbed.size())
        {
            return false;
        }
        else
        {
            for (int i = index; i < flowerbed.size(); i++)
            {
                if ((flowerbed[i] == 0) && (flowerbed[i+1] == 0) && (flowerbed[i+2] == 0))
                {
                    auto res = canPlaceFlowersHelper(flowerbed, n-1, i + 3);
                    if (res)
                    {
                        return true;
                    }
                }
            }
            return false;
        }
    }
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        return canPlaceFlowersHelper(flowerbed, n, 0);
    }
};