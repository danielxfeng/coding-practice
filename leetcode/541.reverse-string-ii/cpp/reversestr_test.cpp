#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "reversestr.cpp"

struct testCase
{
    std::string s;
    int k;
    std::string want;
};

TEST_CASE("ReverseStr")
{
    std::vector<testCase> tcs{
        {"abcdefg", 2, "bacdfeg"},
        {"abcd", 2, "bacd"},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.reverseStr(tc.s, tc.k) == tc.want);
    }
}
