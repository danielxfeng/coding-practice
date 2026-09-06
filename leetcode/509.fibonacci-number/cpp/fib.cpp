#include <array>

class Solution
{
public:
    int fib(int n)
    {
        if (n < 2)
            return n;

        for (int i = 2; i <= n; i++)
            dpFunc(i);

        return arr_[1];
    }

private:
    std::array<int, 2> arr_{0, 1};

    void dpFunc(int n)
    {
        auto v = arr_[0] + arr_[1];
        arr_[0] = arr_[1];
        arr_[1] = v;
    }
};
