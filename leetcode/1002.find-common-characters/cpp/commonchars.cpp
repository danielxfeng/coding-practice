#include <algorithm>
#include <array>
#include <string>
#include <vector>

class Solution
{
public:
    std::vector<std::string> commonChars(
        const std::vector<std::string> &words)
    {
        if (words.empty())
            return {};

        auto c = countWord(words[0]);

        for (std::size_t i = 1; i < words.size(); ++i)
        {
            const auto cl = countWord(words[i]);

            for (int j = 0; j < 26; ++j)
                c[j] = std::min(c[j], cl[j]);
        }

        std::vector<std::string> res;

        for (int i = 0; i < 26; ++i)
        {
            for (int j = 0; j < c[i]; ++j)
                res.push_back(std::string(1, static_cast<char>('a' + i)));
        }

        return res;
    }

private:
    std::array<int, 26> countWord(const std::string &word)
    {
        std::array<int, 26> counts{};

        for (const char ch : word)
            counts[ch - 'a']++;

        return counts;
    }
};
