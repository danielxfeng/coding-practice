#include <string>
#include <unordered_map>
#include <array>

class Solution
{
public:
    // N, K
    bool isAnagram(std::string s, std::string t)
    {
        return isAnagramArray(s, t);
    }

private:
    bool isAnagramArray(std::string s, std::string t)
    {
        if (s.length() != t.length())
            return false;

        std::array<int, 26> arr;

        for (auto c : s)
            arr[dist(c)]++;

        for (auto c : t)
        {
            auto i = dist(c);

            arr[i]--;
            if (arr[i] < 0)
                return false;
        }
        return true;
    };

    int dist(char ch)
    {
        return ch - 'a';
    }

    bool isAnagramBasic(std::string s, std::string t)
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