#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "twosum.cpp"

struct testCase
{
    std::vector<int> nums;
    int target;
    std::vector<int> want;
};

TEST_CASE("TwoSum")
{
    std::vector<testCase> tcs{
        {std::vector<int>{2, 7, 11, 15}, 9, std::vector<int>{0, 1}},
        {std::vector<int>{3, 2, 4}, 6, std::vector<int>{1, 2}},
        {std::vector<int>{3, 3}, 6, std::vector<int>{0, 1}},
        {std::vector<int>{}, 0, std::vector<int>{}},
        {std::vector<int>{0, 4, 3, 0}, 0, std::vector<int>{0, 3}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.twoSum(tc.nums, tc.target) == tc.want);
    }
}

TEST_CASE("TwoSum: {3, 2, 4}, 6 -> [1, 2]")
{
    Solution s;

    std::vector<int> nums{3, 2, 4};

    CHECK(
        s.twoSum(nums, 6) ==
        std::vector<int>{1, 2});
}

TEST_CASE("TwoSum: {3, 3}, 6 -> [0, 1]")
{
    Solution s;

    std::vector<int> nums{3, 3};

    CHECK(
        s.twoSum(nums, 6) ==
        std::vector<int>{0, 1});
}