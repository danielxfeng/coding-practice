#include <string>
#include <unordered_map>

class Solution
{
public:
    // N, K
    bool isAnagram(std::string s, std::string t)
    {
        if (s.length() != t.length())
            return false;

        auto m = std::unordered_map<char, int>{26};

        for (auto c : s)
            m[c]++;

        for (auto c : t)
        {
            m[c]--;
            if (m[c] < 0)
                return false;
        }
        return true;
    }
};