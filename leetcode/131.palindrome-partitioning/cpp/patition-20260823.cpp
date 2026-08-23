#include <string>
#include <vector>

class Solution
{
public:
    std::vector<std::vector<std::string>> partition(std::string s)
    {
        backtrack(s, 0);
        return res_;
    }

private:
    std::vector<std::vector<std::string>> res_{};
    std::vector<std::string> path_{};

    void backtrack(std::string s, int start)
    {
        if (start == s.size())
            res_.push_back(path_);

        for (auto i = start; i < s.size(); i++)
        {
            if (!isPalindrome(s, start, i))
                continue;

            path_.push_back(s.substr(start, i - start + 1));
            backtrack(s, i + 1);
            path_.pop_back();
        }
    }

    bool isPalindrome(std::string s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }

        return true;
    }
};
