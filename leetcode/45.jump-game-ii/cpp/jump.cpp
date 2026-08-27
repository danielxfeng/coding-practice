#include <vector>

class Solution
{
public:
    int jump(std::vector<int> &nums)
    {
        if (nums.size() < 2)
            return 0;

        int res = 0;
        int curr = 0;
        int next = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            next = i + nums[i] > next ? i + nums[i] : next;

            if (i != curr)
                continue;

            res++;
            curr = next;
            if (curr >= nums.size() - 1)
                break;
        }

        return res;
    }
};
