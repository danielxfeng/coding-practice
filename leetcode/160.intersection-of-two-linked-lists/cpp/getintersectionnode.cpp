#include <unordered_set>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        std::unordered_set<ListNode *> s;

        while (headA != nullptr)
        {
            s.emplace(headA);
            headA = headA->next;
        }

        while (headB != nullptr)
        {
            if (s.find(headB) != s.end())
                return headB;
            headB = headB->next;
        }

        return nullptr;
    }
};
