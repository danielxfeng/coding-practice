#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "isvalid.cpp"

struct testCase
{
    std::string s;
    bool want;
};

TEST_CASE("IsValid")
{
    std::vector<testCase>
        tcs{
            {"()", true},
            {"()[]{}", true},
            {"(]", false},
            {"([])", true},
            {"([)]", false},
        };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.isValid(tc.s);
        CHECK(got == tc.want);
    }
}
