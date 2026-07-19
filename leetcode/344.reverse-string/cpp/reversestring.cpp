#include <vector>

class Solution
{
public:
    void reverseString(std::vector<char> &s)
    {
        if (s.empty())
            return;

        auto itStart = s.begin();
        auto itEnd = s.end() - 1;

        while (itStart < itEnd)
        {
            auto temp = *itStart;
            *itStart = *itEnd;
            *itEnd = temp;

            ++itStart;
            --itEnd;
        }
    }
};
