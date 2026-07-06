#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "reverselist.cpp"

ListNode *buildList(std::initializer_list<int> vals)
{
    ListNode dummy{};
    ListNode *curr = &dummy;

    for (const auto v : vals)
    {
        curr->next = new ListNode{v};
        curr = curr->next;
    }

    return dummy.next;
}

bool equalLists(ListNode *l1, ListNode *l2)
{
    if (l1 == nullptr && l2 == nullptr)
        return true;

    if (l1 == nullptr || l2 == nullptr)
        return false;

    if (l1->val != l2->val)
        return false;

    return equalLists(l1->next, l2->next);
}

struct testCase
{
    ListNode *head;
    ListNode *want;
};

TEST_CASE("ReverseList")
{
    std::vector<testCase>
        tcs{
            {buildList({1, 2, 3, 4, 5}), buildList({5, 4, 3, 2, 1})},
            {buildList({1, 2}), buildList({2, 1})},
            {buildList({}), buildList({})},
        };

    Solution s;

    for (auto tc : tcs)
    {
        auto got = s.reverseList(tc.head);
        CHECK(equalLists(got, tc.want));
    }
}
