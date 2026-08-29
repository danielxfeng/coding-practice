#include <vector>

class Solution
{
public:
    int canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost)
    {
        int res = 0;
        int total = 0;
        int curr = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            int v = gas[i] - cost[i];
            total += v;
            curr += v;

            if (curr < 0)
            {
                curr = 0;
                res = i + 1;
            }
        }

        if (total < 0)
            return -1;
        return res;
    }
};
