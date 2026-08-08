#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<int> intersection(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::unordered_set<int> valuesInFirstArray;
        std::vector<int> res;

        for (const int n : nums1)
            valuesInFirstArray.emplace(n);

        for (const int n : nums2)
        {
            if (valuesInFirstArray.find(n) != valuesInFirstArray.end())
            {
                valuesInFirstArray.erase(n);
                res.push_back(n);
            }
        }

        return res;
    }
};
