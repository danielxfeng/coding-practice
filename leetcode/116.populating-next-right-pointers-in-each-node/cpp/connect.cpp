#include <deque>

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    Node *connect(Node *root)
    {
        std::deque<Node *> nodeQueue;

        if (root != nullptr)
            nodeQueue.push_back(root);

        while (!nodeQueue.empty())
        {
            int size = nodeQueue.size();

            Node *prev;
            for (int i = 0; i < size; i++)
            {
                auto curr = nodeQueue.front();
                nodeQueue.pop_front();

                if (i > 0)
                    prev->next = curr;
                prev = curr;

                if (curr->left != nullptr)
                    nodeQueue.push_back(curr->left);
                if (curr->right != nullptr)
                    nodeQueue.push_back(curr->right);
            }
        }

        return root;
    }
};
