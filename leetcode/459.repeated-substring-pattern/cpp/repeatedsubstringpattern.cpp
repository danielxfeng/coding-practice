#include <string>
#include <vector>

class Solution
{
public:
    bool repeatedSubstringPattern(std::string s)
    {
        if (s.empty())
            return false;

        auto prefixLengths = getNextArr(s);

        bool isLastMatch = prefixLengths[s.size() - 1] > 0;
        bool isRemainderMatch = s.size() % (s.size() - prefixLengths[s.size() - 1]) == 0;

        return isLastMatch && isRemainderMatch;
    }

private:
    std::vector<int> getNextArr(std::string s)
    {
        auto prefixLengths = std::vector<int>(s.size());
        prefixLengths[0] = 0;

        int j = 0;
        for (int i = 1; i < s.size(); ++i)
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
