#include <vector>

class Solution
{
public:
    int wiggleMaxLength(std::vector<int> &nums)
    {
        if (nums.size() < 2)
            return nums.size();

        int res = 1;
        int dir = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            int diff = nums[i] - nums[i - 1];

            if (dir == 0 && diff != 0)
            {
                if (diff < 0)
                    dir = -1;
                else
                    dir = 1;

                res++;
                continue;
            }

            if (diff * dir < 0)
            {
                res++;
                dir *= -1;
            }
        }

        return res;
    }
};
