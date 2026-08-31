#include <vector>
#include <string>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> partitionLabels(std::string s)
    {
        std::unordered_map<char, int> last{};

        for (auto i = 0; i < s.size(); i++)
            last[s[i]] = i;

        std::vector<int> res{};

        int start = 0;
        int end = 0;

        for (auto i = 0; i < s.size(); i++)
        {
            if (last[s[i]] > end)
                end = last[s[i]];

            if (i == end)
            {
                res.push_back(i - start + 1);
                start = i + 1;
            }
        }

        return res;
    }
};
