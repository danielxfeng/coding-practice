#include <queue>

class MyStack
{
public:
    MyStack()
    {
    }

    void push(int x)
    {
        queue_.push(x);
    }

    int pop()
    {
        int size = queue_.size();

        while (size-- > 1)
        {
            queue_.push(queue_.front());
            queue_.pop();
        }

        int result = queue_.front();
        queue_.pop();
        return result;
    }

    int top()
    {
        int size = queue_.size();

        while (size-- > 1)
        {
            queue_.push(queue_.front());
            queue_.pop();
        }

        int result = queue_.front();
        queue_.push(queue_.front());
        queue_.pop();
        return result;
    }

    bool empty()
    {
        return queue_.empty();
    }

private:
    std::queue<int> queue_;
};
