#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "removeelement.cpp"

struct testCase
{
    std::vector<int> nums;
    int val;
    int want;
    std::vector<int> wantNums;
};

TEST_CASE("RemoveElement")
{
    std::vector<testCase> tcs{
        {std::vector<int>{3, 2, 2, 3}, 3, 2, std::vector<int>{2, 2}},
        {std::vector<int>{0, 1, 2, 2, 3, 0, 4, 2}, 2, 5, std::vector<int>{0, 1, 3, 0, 4}},
        {std::vector<int>{}, 2, 0, std::vector<int>{}},
        {std::vector<int>{0, 0, 0}, 0, 0, std::vector<int>{}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        int got = s.removeElement(tc.nums, tc.val);
        CHECK(got == tc.want);
        std::vector<int> gotNums(tc.nums.begin(), tc.nums.begin() + got);
        CHECK(gotNums == tc.wantNums);
    }
}
