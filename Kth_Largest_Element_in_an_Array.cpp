class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int> queue{};

        for (auto item : nums)
        {
            queue.push(item);
        }

        int top = -1;
        while (k--)
        {
            top = queue.top();
            queue.pop();
        }
        return top;
    }
};