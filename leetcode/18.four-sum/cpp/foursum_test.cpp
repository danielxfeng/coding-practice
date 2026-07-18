#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "foursum.cpp"

struct testCase
{
    std::vector<int> nums;
    int target;
    std::vector<std::vector<int>> want;
};

TEST_CASE("ThreeSum")
{
    std::vector<testCase> tcs{
        {{-1, 0, 1, 2, -1, -4}, 0, {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}}},
        {{2, 2, 2, 2, 2}, 8, {{2, 2, 2, 2}}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.fourSum(tc.nums, tc.target);
        CHECK(got == tc.want);
    }
}
