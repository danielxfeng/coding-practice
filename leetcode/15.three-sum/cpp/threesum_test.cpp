#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "threesum.cpp"

struct testCase
{
    std::vector<int> nums;
    std::vector<std::vector<int>> want;
};

TEST_CASE("ThreeSum")
{
    std::vector<testCase> tcs{
        {{-1, 0, 1, 2, -1, -4}, {{-1, -1, 2}, {-1, 0, 1}}},
        {{0, 1, 1}, {}},
        {{0, 0, 0}, {{0, 0, 0}}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.threeSum(tc.nums);
        CHECK(got == tc.want);
    }
}
