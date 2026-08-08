#include <string>
#include <vector>

class Solution
{
public:
    int strStr(std::string haystack, std::string needle)
    {
        if (needle.empty())
            return 0;

        auto prefixLengths = getNextArr(needle);

        int j = 0;
        for (int i = 0; i < haystack.size(); ++i)
        {
            while (j > 0 && haystack[i] != needle[j])
                j = prefixLengths[j - 1];

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
        std::vector<int> prefixLengths(s.size());
        prefixLengths[0] = 0;

        int j = 0;
        for (int i = 1; i < prefixLengths.size(); ++i)
        {
            while (j > 0 && s[i] != s[j])
                j = prefixLengths[j - 1];

            if (s[i] == s[j])
                ++j;

            prefixLengths[i] = j;
        }

        return prefixLengths;
    }
};
