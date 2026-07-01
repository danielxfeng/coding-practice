#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "sortedsquares.cpp"

struct testCase
{
    std::vector<int> nums;
    std::vector<int> want;
};

TEST_CASE("SortedSquares")
{
    std::vector<testCase> tcs{
        {std::vector<int>{-4, -1, 0, 3, 10}, std::vector<int>{0, 1, 9, 16, 100}},
        {std::vector<int>{-7, -3, 2, 3, 11}, std::vector<int>{4, 9, 9, 49, 121}},
        {std::vector<int>{-3}, std::vector<int>{9}},
        {std::vector<int>{}, std::vector<int>{}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.sortedSquares(tc.nums);
        CHECK(got == tc.want);
    }
}
