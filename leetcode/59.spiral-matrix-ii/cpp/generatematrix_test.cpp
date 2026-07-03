#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "generatematrix.cpp"

struct testCase
{
    int n;
    std::vector<std::vector<int>> want;
};

TEST_CASE("GenerateMatrix")
{
    std::vector<testCase> tcs{
        {3, {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}}},
        {1, {{1}}},
    };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.generateMatrix(tc.n);
        CHECK(got == tc.want);
    }
}
