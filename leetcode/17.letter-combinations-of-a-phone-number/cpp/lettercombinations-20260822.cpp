#include <vector>
#include <string>

class Solution
{
public:
    std::vector<std::string> letterCombinations(std::string digits)
    {
        backtrack(digits, 0);
        return res_;
    }

private:
    std::vector<std::string> res_{};
    std::vector<char> path_{};
    const std::vector<std::string> letters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void backtrack(std::string digits, int start)
    {
        if (path_.size() == digits.size())
        {
            res_.push_back(std::string(path_.begin(), path_.end()));
            return;
        }

        auto options = letters[digits[start] - '0' - 2];

        for (auto i = 0; i < options.size(); i++)
        {
            path_.push_back(options[i]);
            backtrack(digits, start + 1);
            path_.pop_back();
        }
    }
};
