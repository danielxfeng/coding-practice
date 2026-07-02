#include <vector>

class Solution
{
public:
    int minSubArrayLen(int target, std::vector<int> &nums)
    {
        return minSubArrayLenOptimized(target, nums);
    }

private:
    // N, 1
    int minSubArrayLenOptimized(int target, std::vector<int> &nums)
    {
        int left = 0;
        int sum = 0;
        int res = nums.size() + 1;

        for (int right = 0; right < nums.size(); right++)
        {
            sum += nums[right];

            while (sum >= target)
            {
                const int curr = right - left + 1;
                if (curr < res)
                    res = curr;

                sum -= nums[left];
                left++;
            }
        }

        return res == nums.size() + 1 ? 0 : res;
    }
};
