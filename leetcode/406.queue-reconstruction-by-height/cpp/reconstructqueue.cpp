#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> reconstructQueue(std::vector<std::vector<int>> &people)
    {
        std::sort(people.begin(), people.end(),
                  [](std::vector<int> a, std::vector<int> b)
                  {
                      if (a[0] != b[0])
                          return a[0] > b[0];
                      return a[1] < b[1];
                  });

        std::vector<std::vector<int>> res{};

        for (auto p : people)
        {
            auto it = res.begin();
            res.insert(it + p[1], p);
        }

        return res;
    }
};
