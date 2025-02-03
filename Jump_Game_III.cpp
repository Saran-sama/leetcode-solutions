class Solution {
public:
    bool canReach(vector<int>& arr, int start)
    {
        if ((start >= arr.size()) || (start < 0))
        {
            return false;
        }
        else if (_result.find(start) != _result.end())
        {
            return _result[start];
        }
        _result[start] = false;
        if (canReach(arr, start + arr[start]) || (canReach(arr, start - arr[start])))
        {
            _result[start] = true;
            return true;
        }

        if (arr[start] == 0)
        {
            _result[start] = true;
            return true;
        }
        return false;
    }
private:
    map<int, bool> _result;
};