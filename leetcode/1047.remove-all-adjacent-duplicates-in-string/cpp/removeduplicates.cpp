#include <string>
#include <stack>
#include <algorithm>

class Solution
{
public:
    std::string removeDuplicates(std::string s)
    {
        std::stack<char> stack;

        for (char ch : s)
        {
            if (!stack.empty() && stack.top() == ch)
                stack.pop();
            else
                stack.push(ch);
        }

        std::string result;
        result.reserve(stack.size());

        while (!stack.empty())
        {
            result.push_back(stack.top());
            stack.pop();
        }

        std::reverse(result.begin(), result.end());

        return result;
    }
};
