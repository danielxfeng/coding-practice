#include <vector>
#include <deque>

class MonotonicQueue
{
public:
    void pop(int v)
    {
        if (!deque_.empty() && deque_.front() == v)
            deque_.pop_front();
    }

    void push(int v)
    {
        while (!deque_.empty() && deque_.back() < v)
            deque_.pop_back();

        deque_.push_back(v);
    }

    int top()
    {
        return deque_.front();
    }

private:
    std::deque<int> deque_;
};

class Solution
{
public:
    std::vector<int> maxSlidingWindow(std::vector<int> &nums, int k)
    {
        if (nums.size() == 0 || k <= 0 || k > nums.size())
            return {};

        MonotonicQueue mq;
        std::vector<int> res;

        for (int i = 0; i < k; i++)
            mq.push(nums[i]);

        res.push_back(mq.top());

        for (int i = k; i < nums.size(); i++)
        {
            mq.pop(nums[i - k]);
            mq.push(nums[i]);

            res.push_back(mq.top());
        }

        return res;
    }
};
