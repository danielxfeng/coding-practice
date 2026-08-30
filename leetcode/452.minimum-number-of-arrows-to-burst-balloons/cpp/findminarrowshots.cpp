#include <vector>

class Solution
{
public:
    int findMinArrowShots(std::vector<std::vector<int>> &points)
    {
        if (points.size() == 0)
            return 0;

        std::sort(points.begin(), points.end(),
                  [](std::vector<int> a, std::vector<int> b)
                  {
                      if (a[1] != b[1])
                          return a[1] < b[1];
                      return a[0] < b[0];
                  });

        int res = 1;
        int bound = points[0][1];

        for (auto p : points)
        {
            if (p[0] <= bound)
                continue;
            res++;
            bound = p[1];
        }

        return res;
    }
};
