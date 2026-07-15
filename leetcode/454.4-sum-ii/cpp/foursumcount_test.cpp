#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "foursumcount.cpp"

struct testCase
{
    std::vector<int> nums1;
    std::vector<int> nums2;
    std::vector<int> nums3;
    std::vector<int> nums4;
    int want;
};

TEST_CASE("FourSumCount")
{
    std::vector<testCase> tcs{
        {{1, 2}, {-2, -1}, {-1, 2}, {0, 2}, 2},
        {{0}, {0}, {0}, {0}, 1},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.fourSumCount(tc.nums1, tc.nums2, tc.nums3, tc.nums4) == tc.want);
    }
}
