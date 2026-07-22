#include <string>
#include <vector>

class Solution
{
public:
    int strStr(std::string haystack, std::string needle)
    {
        if (needle.empty())
            return 0;

        auto next = getNextArr(needle);

        int j = 0;
        for (int i = 0; i < haystack.size(); ++i)
        {
            while (j > 0 && haystack[i] != needle[j])
                j = next[j - 1];

            if (haystack[i] == needle[j])
                ++j;

            if (j == needle.size())
                return i - needle.size() + 1;
        }

        return -1;
    }

private:
    std::vector<int> getNextArr(std::string s)
    {
        std::vector<int> next(s.size());
        next[0] = 0;

        int j = 0;
        for (int i = 1; i < next.size(); ++i)
        {
            while (j > 0 && s[i] != s[j])
                j = next[j - 1];

            if (s[i] == s[j])
                ++j;

            next[i] = j;
        }

        return next;
    }
};
