#include <string>
#include <vector>

class Solution
{
public:
    bool repeatedSubstringPattern(std::string s)
    {
        if (s.empty())
            return false;

        auto next = getNextArr(s);

        bool isLastMatch = next[s.size() - 1] > 0;
        bool isRemainderMatch = s.size() % (s.size() - next[s.size() - 1]) == 0;

        return isLastMatch && isRemainderMatch;
    }

private:
    std::vector<int> getNextArr(std::string s)
    {
        auto next = std::vector<int>(s.size());
        next[0] = 0;

        int j = 0;
        for (int i = 1; i < s.size(); ++i)
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
