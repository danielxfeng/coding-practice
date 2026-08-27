#include <vector>

class Solution
{
public:
    bool canJump(std::vector<int> &nums)
    {
        int maximum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i > maximum)
                return false;

            if (maximum >= nums.size() - 1)
                return true;

            if (i + nums[i] > maximum)
                maximum = i + nums[i];
        }

        return false;
    }
};
