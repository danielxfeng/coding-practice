struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class MyLinkedList
{
public:
    MyLinkedList()
    {
        head_ = new ListNode();
        size_ = 0;
    }

    int get(int index)
    {
        if (index < 0 || index >= size_)
            return -1;

        auto curr = head_->next;

        for (int i = 0; i < index; ++i)
            curr = curr->next;

        return curr->val;
    }

    void addAtHead(int val)
    {
        auto node = new ListNode(val, head_->next);
        head_->next = node;
        size_++;
    }

    void addAtTail(int val)
    {
        auto curr = head_;

        for (int i = 0; i < size_; ++i)
            curr = curr->next;

        auto node = new ListNode(val);
        curr->next = node;
        size_++;
    }

    void addAtIndex(int index, int val)
    {
        if (index > size_)
            return;
        if (index < 0)
            index = 0;

        auto curr = head_;
        for (int i = 0; i < index; ++i)
            curr = curr->next;

        auto node = new ListNode(val, curr->next);
        curr->next = node;
        size_++;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size_)
            return;

        auto curr = head_;
        for (int i = 0; i < index; ++i)
            curr = curr->next;

        auto node = curr->next;
        curr->next = curr->next->next;
        delete node;
        size_--;
    }

private:
    ListNode *head_;
    int size_;
};
