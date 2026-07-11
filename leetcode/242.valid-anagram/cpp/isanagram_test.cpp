#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "isanagram.cpp"

struct testCase
{
    std::string s;
    std::string t;
    bool want;
};

TEST_CASE("IsAnagram")
{
    std::vector<testCase> tcs{
        {"anagram", "nagaram", true},
        {"rat", "car", false},
        {"ra", "ard", false},
    };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.isAnagram(tc.s, tc.t);
        CHECK(got == tc.want);
    }
}
