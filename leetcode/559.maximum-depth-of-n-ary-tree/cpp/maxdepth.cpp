#include <vector>
#include <algorithm>

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
    int maxDepth(Node *root)
    {
        return getDepth(root, 0);
    }

private:
    int getDepth(Node *root, int depth)
    {
        if (root == nullptr)
            return depth;

        depth++;
        int maxDepth = depth;

        for (auto n : root->children)
        {
            auto localDepth = getDepth(n, depth);
            maxDepth = std::max(maxDepth, localDepth);
        }

        return maxDepth;
    }
};
