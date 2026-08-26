#include <vector>

class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        if (prices.empty())
            return 0;

        int res = 0;

        for (auto i = 1; i < prices.size(); i++)
        {
            int profit = prices[i] - prices[i - 1];

            if (profit > 0)
                res += profit;
        }

        return res;
    }
};
