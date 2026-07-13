#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "intersection.cpp"

struct testCase
{
    std::vector<int> nums1;
    std::vector<int> nums2;
    std::vector<int> want;
};

TEST_CASE("Intersection")
{
    std::vector<testCase> tcs{
        {{1, 2, 2, 1}, {2, 2}, {2}},
        {{4, 9, 5}, {9, 4, 9, 8, 4}, {9, 4}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.intersection(tc.nums1, tc.nums2) == tc.want);
    }
}
