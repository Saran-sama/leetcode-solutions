class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        auto comp = [&](int a, int b) -> bool
        {
            auto minA = abs(a - x);
            auto minB = abs(b - x);
            
            return (minA > minB) || ((minA == minB) && (a > b));
        };
        priority_queue<int, vector<int>, decltype(comp)> output(comp);

        for (auto item : arr)
        {
            output.push(item);
        }
        
        vector<int> _out;
        for (int i = 0; i < k; i++)
        {
            _out.push_back(output.top());
            output.pop();
        }
        sort(_out.begin(), _out.end());
        return _out;
    }
};