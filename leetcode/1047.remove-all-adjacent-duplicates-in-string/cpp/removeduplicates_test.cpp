#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "removeduplicates.cpp"

struct testCase
{
    std::string s;
    std::string want;
};

TEST_CASE("IsValid")
{
    std::vector<testCase>
        tcs{
            {"abbaca", "ca"},
            {"azxxzy", "ay"},
        };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.removeDuplicates(tc.s);
        CHECK(got == tc.want);
    }
}
