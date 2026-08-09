#include <vector>

class Node
{
public:
    int val;
    std::vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, std::vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    std::vector<int> preorder(Node *root)
    {
        std::vector<int> res;
        traversal(root, res);

        return res;
    }

private:
    void traversal(Node *root, std::vector<int> &res)
    {
        if (root == nullptr)
            return;

        res.push_back(root->val);

        for (auto n : root->children)
            traversal(n, res);
    }
};
