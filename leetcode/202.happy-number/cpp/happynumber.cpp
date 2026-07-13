#include <unordered_set>

class Solution
{
public:
    bool isHappy(int n)
    {
        std::unordered_set<int> s;

        while (true)
        {
            n = sumSquare(n);

            if (n == 1)
                return true;

            if (s.find(n) != s.end())
                return false;

            s.emplace(n);
        }
    }

private:
    int sumSquare(int n)
    {
        int total = 0;

        while (n > 0)
        {
            int r = n % 10;
            total += r;
            n /= 10;
        }

        return total;
    }
};
