#include <string>
#include <iostream>

class Solution
{
public:
    int monotoneIncreasingDigits(int n)
    {
        auto str = std::to_string(n);
        auto marker = str.size();

        for (int i = str.size() - 1; i > 0; i--)
        {
            if (str[i - 1] > str[i])
            {
                str[i]--;
                marker = i;
            }
        }

        for (int i = marker; i < str.size(); i++)
            str[i] = '9';

        return std::stoi(str);
    }
};
