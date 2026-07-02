#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "minsubarraylen.cpp"

struct testCase
{
    std::vector<int> nums;
    int target;
    int want;
};

TEST_CASE("MinSubArrayLen")
{
    std::vector<testCase> tcs{
        {std::vector<int>{2, 3, 1, 2, 4, 3}, 7, 2},
        {std::vector<int>{1, 4, 4}, 4, 1},
        {std::vector<int>{1, 1, 1, 1, 1, 1, 1, 1}, 11, 0},
        {std::vector<int>{}, 0, 0},
    };

    Solution s;

    for (auto tc : tcs)
    {
        int got = s.minSubArrayLen(tc.target, tc.nums);
        CHECK(got == tc.want);
    }
}
