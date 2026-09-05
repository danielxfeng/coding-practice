#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>> &intervals)
    {
        if (intervals.empty())
            return {};

        std::sort(intervals.begin(), intervals.end(),
                  [](std::vector<int> a, std::vector<int> b)
                  {
                      if (a[0] != b[0])
                          return a[0] < b[0];
                      return a[1] < b[1];
                  });

        std::vector<std::vector<int>> res;
        int left = intervals[0][0];
        int right = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] > right)
            {
                res.push_back({left, right});
                left = intervals[i][0];
                right = intervals[i][1];
                continue;
            }

            left = std::min(left, intervals[i][0]);
            right = std::max(right, intervals[i][1]);
        }

        res.push_back({left, right});

        return res;
    }
};
