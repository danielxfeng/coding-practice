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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode dummyInstance{0, head};
        auto dummy = &dummyInstance;

        auto prev = dummy;
        auto curr = head;

        while (curr != nullptr && curr->next != nullptr)
        {
            const auto next = curr->next;
            const auto nNext = next->next;

            prev->next = next;
            curr->next = nNext;
            next->next = curr;

            prev = curr;
            curr = nNext;
        }

        return dummy->next;
    }
};