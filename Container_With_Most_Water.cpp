class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left = 0;
        int right = height.size() - 1;
        int max = 0;
        while (left < right)
        {
            int water = (right - left) * std::min(height[left], height[right]);
            //std::cout <<right << ", " <<left <<", " << height[left] << ", "<<height[right] << max <<"\n";
            if (max < water)
            {
                max = water;
            }
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max;
    }
};