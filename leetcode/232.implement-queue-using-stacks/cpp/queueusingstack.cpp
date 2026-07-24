#include <stack>

class MyQueue
{
public:
    MyQueue()
    {
    }

    void push(int x)
    {
        _in.push(x);
    }

    int pop()
    {
        if (_out.empty())
        {
            while (!_in.empty())
            {
                _out.push(_in.top());
                _in.pop();
            }
        }

        int v = _out.top();
        _out.pop();

        return v;
    }

    int peek()
    {
        if (_out.empty())
        {
            while (!_in.empty())
            {
                _out.push(_in.top());
                _in.pop();
            }
        }

        return _out.top();
    }

    bool empty()
    {
        return _in.empty() && _out.empty();
    }

private:
    std::stack<int> _in;
    std::stack<int> _out;
};
