#include <string>
#include <algorithm>

class Solution
{
public:
    std::string reverseStr(std::string s, int k)
    {
        for (int i = 0; i < s.size(); i += 2 * k)
        {
            int start = i;
            int end = std::min(i + k, static_cast<int>(s.size())) - 1;

            while (start < end)
            {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;

                start++;
                end--;
            }
        }

        return s;
    }
};
