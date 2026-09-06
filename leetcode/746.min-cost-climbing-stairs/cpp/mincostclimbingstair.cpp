#include <vector>
#include <array>

class Solution
{
public:
    int minCostClimbingStairs(std::vector<int> &cost)
    {
        for (int i = 2; i < cost.size(); i++)
            dpFunc(i, cost);

        return arr_[1];
    }

private:
    std::array<int, 2> arr_{0, 0};

    void dpFunc(int i, std::vector<int> &cost)
    {
        auto v = std::min(arr_[0] + cost[i - 2], arr_[1] + cost[i - 1]);
        arr_[0] = arr_[1];
        arr_[1] = v;
    }
};
