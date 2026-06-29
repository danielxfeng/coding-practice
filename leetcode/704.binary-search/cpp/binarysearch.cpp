#include <vector>
#include <algorithm>

class Solution
{
public:
    int search(std::vector<int> &nums, int target)
    {
        return searchBruteForce(nums, target);
    }

private:
    // LogN, 1
    int searchOptimized(std::vector<int> &nums, int target)
    {
        auto it = std::lower_bound(nums.begin(), nums.end(), target);
        if (it == nums.end() || *it != target)
            return -1;
        return it - nums.begin();
    }

    // N, 1
    int searchBruteForce(std::vector<int> &nums, int target)
    {
        auto it = std::find(nums.begin(), nums.end(), target);
        if (it != nums.end())
            return it - nums.begin();

        return -1;
    }
};