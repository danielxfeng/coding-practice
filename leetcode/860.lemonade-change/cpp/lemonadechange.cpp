#include <vector>

class Solution
{
public:
    bool lemonadeChange(std::vector<int> &bills)
    {
        int tens = 0;
        int fives = 0;

        for (auto v : bills)
        {
            switch (v)
            {
            case 5:
                fives++;
                break;
            case 10:
                tens++;
                fives--;
                break;
            case 20:
                tens--;
                fives--;
                if (tens < 0)
                {
                    tens++;
                    fives -= 2;
                }
                break;
            default:
                break;
            }

            if (fives < 0 || tens < 0)
                return false;
        }

        return true;
    }
};
