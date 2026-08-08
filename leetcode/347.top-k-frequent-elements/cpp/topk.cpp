#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k)
    {
        std::unordered_map<int, int> frequencyByNumber;

        for (auto n : nums)
            frequencyByNumber[n]++;

        std::vector<std::pair<int, int>> numberFrequencies;

        for (const auto item : frequencyByNumber)
            numberFrequencies.push_back({item.first, item.second});

        std::sort(
            numberFrequencies.begin(),
            numberFrequencies.end(),
            [](const auto &a, const auto &b)
            {
                return a.second > b.second;
            });

        std::vector<int> res;

        for (int i = 0; i < k; ++i)
            res.push_back(numberFrequencies[i].first);

        return res;
    }
};
