#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "twosum.cpp"

TEST_CASE("TwoSum: {2, 7, 11, 15}, 9 -> [0, 1]")
{
    Solution s;

    std::vector<int> nums{2, 7, 11, 15};

    CHECK(
        s.twoSum(nums, 9) ==
        std::vector<int>{0, 1});
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