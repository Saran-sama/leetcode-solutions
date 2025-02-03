class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        set<string> source;
        set<string> destination;
        for (auto& path: paths)
        {
            destination.insert(path[1]);
            source.insert(path[0]);
        }
        for (auto& eachDest : destination)
        {
            if (source.find(eachDest) == source.end())
            {
                return eachDest;
            }
        }
        return "";
    }
};