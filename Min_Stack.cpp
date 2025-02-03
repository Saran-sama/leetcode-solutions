class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) 
    {
        if (!_stack.size())
        {
            _stack.push(x);
            _minStack.push(x);
        }
        else
        {
            auto top = _minStack.top();
            if (top > x)
            {
                _minStack.push(x);
                _stack.push(x);
            }
            else
            {
                _minStack.push(top);
                _stack.push(x);
            }
        }
    }
    
    void pop() 
    {
        if (_stack.size())
        {
            _stack.pop();
            _minStack.pop();
        }        
    }
    
    int top() 
    {
        return _stack.top(); 
    }
    
    int getMin() 
    {
        return _minStack.top();   
    }
    stack<int> _stack;
    stack<int> _minStack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */