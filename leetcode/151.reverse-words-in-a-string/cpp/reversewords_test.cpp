#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "reversewords.cpp"

struct testCase
{
    std::string s;
    std::string want;
};

TEST_CASE("ReverseWords")
{
    std::vector<testCase> tcs{
        {"the sky is blue", "blue is sky the"},
        {"  hello world  ", "world hello"},
        {"a good   example", "example good a"},
    };

    Solution s;

    for (auto tc : tcs)
    {
        CHECK(s.reverseWords(tc.s) == tc.want);
    }
}
