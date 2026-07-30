#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k)
    {
        std::unordered_map<int, int> map;

        for (auto n : nums)
            map[n]++;

        std::vector<std::pair<int, int>> items;

        for (const auto item : map)
            items.push_back({item.first, item.second});

        std::sort(
            items.begin(),
            items.end(),
            [](const auto &a, const auto &b)
            {
                return a.second > b.second;
            });

        std::vector<int> res;

        for (int i = 0; i < k; ++i)
            res.push_back(items[i].first);

        return res;
    }
};
