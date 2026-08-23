#include <vector>
#include <string>
#include <sstream>

class Solution
{
public:
    std::vector<std::string> restoreIpAddresses(std::string s)
    {
        backtrack(s, 0);
        return res_;
    }

private:
    std::vector<std::string> res_{};
    std::vector<std::string> path_{};

    void backtrack(std::string s, int start)
    {
        if (start == s.size() && path_.size() == 4)
        {
            res_.push_back(joinIp(path_));
            return;
        }

        for (int i = start; i < s.size(); i++)
        {
            auto sub = s.substr(start, i - start + 1);
            if (!isValidIpPart(sub))
                continue;

            path_.push_back(sub);
            backtrack(s, i + 1);
            path_.pop_back();
        }
    }

    bool isValidIpPart(std::string s)
    {
        if (s.size() > 3)
            return false;
        if (s.size() > 1 && s[0] == '0')
            return false;
        try
        {
            auto part = std::stoi(s);
            return part >= 0 && part <= 255;
        }
        catch (...)
        {
            return false;
        }
    }

    std::string joinIp(std::vector<std::string> path)
    {
        std::ostringstream stream;
        for (auto i = 0; i < path.size(); i++)
        {
            stream << path[i];
            if (i != path.size() - 1)
                stream << ".";
        }

        return stream.str();
    }
};
