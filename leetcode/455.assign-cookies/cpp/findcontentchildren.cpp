#include <vector>

class Solution
{
public:
    int findContentChildren(std::vector<int> &g, std::vector<int> &s)
    {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        int res = 0;
        int j = 0;

        for (auto c : s)
        {
            if (j >= g.size())
                break;

            if (c < g[j])
                continue;

            j++;
            res++;
        }

        return res;
    }
};
