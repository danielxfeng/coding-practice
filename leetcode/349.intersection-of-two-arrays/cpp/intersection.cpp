#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<int> intersection(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::unordered_set<int> s;
        std::vector<int> res;

        for (const int n : nums1)
            s.emplace(n);

        for (const int n : nums2)
        {
            if (s.find(n) != s.end())
            {
                s.erase(n);
                res.push_back(n);
            }
        }

        return res;
    }
};
