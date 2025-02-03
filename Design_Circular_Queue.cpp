class MyCircularQueue {
public:
    MyCircularQueue(int k):_capacity(k), _list(k)
    {
        
    }
    
    bool enQueue(int value) 
    {
        if (_end < _capacity)
        {
            _list.push_back(value);
            _end++;
            return true;
        }
        return false;
    }
    
    bool deQueue() 
    {
        if (!_list.size())
        {
            return false;
        }
        _list.pop_back();
        _end--;
        return true;
    }
    
    int Front() 
    {
        return _list[0];    
    }
    
    int Rear() 
    {
        return _list[_list.size() - 1];
    }
    
    bool isEmpty() 
    {
        return _list.size() == 0;    
    }
    
    bool isFull() 
    {
        return _list.size() == _end;    
    }
private:
    size_t _capacity;
    vector<int> _list;
    size_t _end = 0;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */