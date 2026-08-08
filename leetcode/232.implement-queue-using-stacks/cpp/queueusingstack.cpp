#include <stack>

class MyQueue
{
public:
    MyQueue()
    {
    }

    void push(int x)
    {
        inputStack_.push(x);
    }

    int pop()
    {
        if (outputStack_.empty())
        {
            while (!inputStack_.empty())
            {
                outputStack_.push(inputStack_.top());
                inputStack_.pop();
            }
        }

        int v = outputStack_.top();
        outputStack_.pop();

        return v;
    }

    int peek()
    {
        if (outputStack_.empty())
        {
            while (!inputStack_.empty())
            {
                outputStack_.push(inputStack_.top());
                inputStack_.pop();
            }
        }

        return outputStack_.top();
    }

    bool empty()
    {
        return inputStack_.empty() && outputStack_.empty();
    }

private:
    std::stack<int> inputStack_;
    std::stack<int> outputStack_;
};
