#include <unordered_set>

class Solution
{
public:
    bool isHappy(int n)
    {
        std::unordered_set<int> seenNumbers;

        while (true)
        {
            n = sumSquare(n);

            if (n == 1)
                return true;

            if (seenNumbers.find(n) != seenNumbers.end())
                return false;

            seenNumbers.emplace(n);
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
