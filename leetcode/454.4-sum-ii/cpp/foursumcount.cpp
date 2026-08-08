#include <vector>
#include <unordered_map>

class Solution
{
public:
    int fourSumCount(std::vector<int> &nums1, std::vector<int> &nums2, std::vector<int> &nums3, std::vector<int> &nums4)
    {
        std::unordered_map<int, int> pairSumCounts;
        int res = 0;

        for (const auto n1 : nums1)
        {
            for (const auto n2 : nums2)
                pairSumCounts[n1 + n2]++;
        }

        for (const auto n3 : nums3)
        {
            for (const auto n4 : nums4)
                res += pairSumCounts[-n3 - n4];
        }

        return res;
    }
};
