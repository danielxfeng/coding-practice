#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "topk.cpp"

struct testCase
{
    std::vector<int> nums;
    int k;
    std::vector<int> want;
};

TEST_CASE("TopKFrequency")
{
    std::vector<testCase> tcs{
        {{1, 1, 1, 2, 2, 3}, 2, {1, 2}},
        {{1}, 1, {1}},
        {{1, 2, 1, 2, 1, 2, 3, 1, 3, 2}, 2, {2, 1}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.topKFrequent(tc.nums, tc.k);
        CHECK(got == tc.want);
    }
}
