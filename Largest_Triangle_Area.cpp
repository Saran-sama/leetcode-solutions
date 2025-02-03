class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        vector<int> height(points.size(), 0);
        vector<int> width(points.size(), 0);
        for (auto& item : points)
        {
            height.push_back(item[0]);
            width.push_back(item[1]);
        }
        
        auto maxHeight = std::max_element(height.begin(), height.end());
        auto maxWidth = std::max_element(width.begin(), width.end());
        
        return (*maxHeight) * (*maxWidth) * 0.5;
    }
};