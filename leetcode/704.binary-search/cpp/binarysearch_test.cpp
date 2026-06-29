#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "binarysearch.cpp"

struct testCase
{
    std::vector<int> nums;
    int target;
    int want;
};

TEST_CASE("BinarySearch")
{
    std::vector<testCase>
        tcs{
            {std::vector<int>{-1, 0, 3, 5, 9, 12}, 9, 4},
            {std::vector<int>{-1, 0, 3, 5, 9, 12}, 2, -1},
            {std::vector<int>{}, 0, -1},
            {std::vector<int>{1}, 1, 0},
            {std::vector<int>{2, 3}, 3, 1},
        };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.search(tc.nums, tc.target) == tc.want);
    }
}