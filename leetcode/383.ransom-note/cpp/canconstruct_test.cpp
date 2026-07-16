#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "canconstruct.cpp"

struct testCase
{
    std::string ransomNote;
    std::string magazine;
    bool want;
};

TEST_CASE("CanConstruct")
{
    std::vector<testCase> tcs{
        {"a", "b", false},
        {"aa", "ab", false},
        {"aa", "aab", true},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.canConstruct(tc.ransomNote, tc.magazine) == tc.want);
    }
}
