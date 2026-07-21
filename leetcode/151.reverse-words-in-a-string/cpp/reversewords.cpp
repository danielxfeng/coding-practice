#include <string>

class Solution
{
public:
    std::string reverseWords(std::string s)
    {
        auto spaceRemoved = removeSpace(s);
        auto reversedLine = resolveLine(spaceRemoved);
        return resolveWords(reversedLine);
    }

private:
    std::string removeSpace(std::string s)
    {
        std::string res;
        res.reserve(s.size());

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == ' ')
                continue;

            if (!res.empty() && s[i - 1] == ' ')
                res.push_back(' ');
            res.push_back(s[i]);
        }

        return res;
    }

    std::string resolveLine(std::string s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start < end)
        {
            auto temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            ++start;
            --end;
        }

        return s;
    }

    std::string resolveWords(std::string s)
    {
        int start = 0;

        for (int i = 0; i <= s.size(); i++)
        {
            if (i == s.size() || s[i] == ' ')
            {
                int end = i - 1;
                while (start < end)
                {
                    auto temp = s[start];
                    s[start] = s[end];
                    s[end] = temp;

                    ++start;
                    --end;
                }

                start = i + 1;
            }
        }

        return s;
    }
};
