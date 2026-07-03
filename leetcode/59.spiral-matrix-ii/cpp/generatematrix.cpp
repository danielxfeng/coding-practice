#include <vector>

class Solution
{
public:
    // N2, 1
    std::vector<std::vector<int>> generateMatrix(int n)
    {
        std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

        int num = 1;
        for (int i = 0; i < n / 2; ++i)
        {
            int last = n - i - 1;

            for (int j = i; j < last; ++j)
                matrix[i][j] = num++;

            for (int j = i; j < last; ++j)
                matrix[j][last] = num++;

            for (int j = last; j > i; --j)
                matrix[last][j] = num++;

            for (int j = last; j > i; --j)
                matrix[j][i] = num++;
        }

        if (n % 2 == 1)
            matrix[n / 2][n / 2] = num;

        return matrix;
    }
};
