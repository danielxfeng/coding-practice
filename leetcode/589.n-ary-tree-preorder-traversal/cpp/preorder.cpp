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
        travelsal(root, res);

        return res;
    }

private:
    void travelsal(Node *root, std::vector<int> &res)
    {
        if (root == nullptr)
            return;

        res.push_back(root->val);

        for (auto n : root->children)
            travelsal(n, res);
    }
};
