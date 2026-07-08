struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    // N, 1
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode dummyNode{0, head};
        auto dummy = &dummyNode;

        auto curr = head;
        auto prevSlow = dummy;

        int i = 0;
        while (curr != nullptr)
        {
            if (i++ >= n)
                prevSlow = prevSlow->next;

            curr = curr->next;
        }

        prevSlow->next = prevSlow->next->next;

        return dummy->next;
    }
};
