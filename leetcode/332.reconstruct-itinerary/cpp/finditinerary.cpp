#include <vector>
#include <string>
#include <unordered_map>
#include <map>

// Got: Time Limit Exceeded, so an optimization is expected.

class Solution
{
public:
    std::vector<std::string> findItinerary(std::vector<std::vector<std::string>> &tickets)
    {
        for (auto ticket : tickets)
            targets_[ticket[0]][ticket[1]]++;

        res_.push_back("JFK");
        backtrack(tickets);
        return res_;
    }

private:
    std::unordered_map<std::string, std::map<std::string, int>> targets_{};
    std::vector<std::string> res_{};

    bool backtrack(std::vector<std::vector<std::string>> &tickets)
    {
        if (res_.size() == tickets.size() + 1)
            return true;

        for (auto &target : targets_[res_[res_.size() - 1]])
        {
            if (target.second <= 0)
                continue;

            res_.push_back(target.first);
            target.second--;

            if (backtrack(tickets))
                return true;

            res_.pop_back();

            target.second++;
        }

        return false;
    }
};
