#include <vector>

class Solution
{
public:
    int eraseOverlapIntervals(std::vector<std::vector<int>> &intervals)
    {
        if (intervals.size() < 2)
            return 0;

        std::sort(intervals.begin(), intervals.end(),
                  [](std::vector<int> a, std::vector<int> b)
                  {
                      if (a[1] != b[1])
                          return a[1] < b[1];
                      return a[0] < b[0];
                  });

        int res = 0;
        int prevIdx = 0;

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] < intervals[prevIdx][1])
            {
                res++;
                continue;
            }

            prevIdx = i;
        }

        return res;
    }
};
