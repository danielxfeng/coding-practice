#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "reversestring.cpp"

struct testCase
{
    std::vector<char> s;
    std::vector<char> want;
};

TEST_CASE("ReverseString")
{
    std::vector<testCase> tcs{
        {{'h', 'e', 'l', 'l', 'o'}, {'o', 'l', 'l', 'e', 'h'}},
        {{'H', 'a', 'n', 'n', 'a', 'h'}, {'h', 'a', 'n', 'n', 'a', 'H'}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        s.reverseString(tc.s);
        CHECK(tc.s == tc.want);
    }
}
