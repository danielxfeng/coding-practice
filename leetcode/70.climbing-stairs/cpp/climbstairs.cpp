#include <array>

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n < 3)
            return n;

        for (auto i = 3; i <= n; i++)
            dpFunc();

        return arr_[1];
    }

private:
    std::array<int, 2> arr_{1, 2};

    void dpFunc()
    {
        auto v = arr_[0] + arr_[1];
        arr_[0] = arr_[1];
        arr_[1] = v;
    }
};
