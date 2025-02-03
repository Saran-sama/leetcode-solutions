class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
    {
        set<int> distinct;
        for(auto item : candyType)
        {
            distinct.insert(item);
        }
        return distinct.size() < (candyType.size()/2) ? distinct.size() : candyType.size()/2;
    }
};