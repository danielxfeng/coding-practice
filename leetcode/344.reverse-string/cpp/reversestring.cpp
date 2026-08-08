#include <vector>

class Solution
{
public:
    void reverseString(std::vector<char> &characters)
    {
        if (characters.empty())
            return;

        auto itStart = characters.begin();
        auto itEnd = characters.end() - 1;

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
