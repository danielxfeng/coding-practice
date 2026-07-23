#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "repeatedsubstringpattern.cpp"

struct testCase
{
    std::string s;
    bool want;
};

TEST_CASE("RepeatedSubstringPattern")
{
    std::vector<testCase> tcs{
        {"abab", true},
        {"aba", false},
        {"abcabcabcabc", true},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.repeatedSubstringPattern(tc.s) == tc.want);
    }
}
