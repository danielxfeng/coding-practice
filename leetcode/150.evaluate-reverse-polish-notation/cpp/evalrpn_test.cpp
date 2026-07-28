#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "evalrpn.cpp"

struct testCase
{
    std::vector<std::string> tokens;
    int want;
};

TEST_CASE("Eval RPN")
{
    std::vector<testCase>
        tcs{
            {{"2", "1", "+", "3", "*"}, 9},
            {{"4", "13", "5", "/", "+"}, 6},
            {{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"}, 22},
        };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.evalRPN(tc.tokens);
        CHECK(got == tc.want);
    }
}
