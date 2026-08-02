#include <vector>
#include <deque>

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
    std::vector<std::vector<int>> levelOrder(Node *root)
    {
        std::vector<std::vector<int>> res;
        std::deque<Node *> deque;

        if (root != nullptr)
            deque.push_back(root);

        while (!deque.empty())
        {
            int size = deque.size();

            std::vector<int> layer(size);

            for (int i = 0; i < size; ++i)
            {
                auto curr = deque.front();
                deque.pop_front();

                layer[i] = curr->val;

                for (auto n : curr->children)
                {
                    if (n != nullptr)
                        deque.push_back(n);
                }
            }

            res.push_back(layer);
        }

        return res;
    }
};
