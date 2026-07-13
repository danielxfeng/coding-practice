#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "happynumber.cpp"

struct testCase
{
    int n;
    bool want;
};

TEST_CASE("HappyNumber")
{
    std::vector<testCase> tcs{
        {19, true},
        {2, false},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.isHappy(tc.n) == tc.want);
    }
}
