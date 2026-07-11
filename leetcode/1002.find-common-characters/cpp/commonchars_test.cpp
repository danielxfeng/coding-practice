#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "commonchars.cpp"

struct testCase
{
    std::vector<std::string> words;
    std::vector<std::string> want;
};

TEST_CASE("CommonChars")
{
    std::vector<testCase> tcs{
        {{"bella", "label", "roller"}, {"e", "l", "l"}},
        {{"cool", "lock", "cook"}, {"c", "o"}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.commonChars(tc.words);
        CHECK(got == tc.want);
    }
}
