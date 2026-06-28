#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        return twoSumOptimized(nums, target);
    }

private:
    // N, N
    std::vector<int> twoSumOptimized(std::vector<int> &nums, int target)
    {
        auto m = std::unordered_map<int, int>{};
        m.reserve(nums.size());

        for (std::size_t i = 0; i < nums.size(); ++i)
        {
            auto it = m.find(target - nums[i]);
            if (it != m.end())
                return {it->second, static_cast<int>(i)};

            m[nums[i]] = i;
        }

        return {};
    }

    // N2, 1
    std::vector<int> twoSumBruteForce(std::vector<int> &nums, int target)
    {
        for (std::size_t i = 0; i < nums.size(); i++)
        {
            for (std::size_t j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                    return {static_cast<int>(i), static_cast<int>(j)};
            }
        }
        return {};
    }
};
