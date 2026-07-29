#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "maxslidingwindow.cpp"

struct testCase
{
    std::vector<int> nums;
    int k;
    std::vector<int> want;
};

TEST_CASE("Max Sliding Window")
{
    std::vector<testCase>
        tcs{
            {{1, 3, -1, -3, 5, 3, 6, 7}, 3, {3, 3, 5, 5, 6, 7}},
        };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.maxSlidingWindow(tc.nums, tc.k);
        CHECK(got == tc.want);
    }
}
