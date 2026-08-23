#include <vector>

const int SIZE = 9;

struct point
{
    int row;
    int col;
};

class Solution
{
public:
    void solveSudoku(std::vector<std::vector<char>> &board)
    {
        board_ = board;
        backtrack(0);
        board = board_;
    }

private:
    std::vector<std::vector<char>> board_{};

    point idxToPoint(int idx)
    {
        return {idx / SIZE, idx % SIZE};
    }

    bool isValid(int row, int col, char v)
    {
        for (int i = 0; i < SIZE; ++i)
        {
            if (board_[row][i] == v)
                return false;

            if (board_[i][col] == v)
                return false;
        }

        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int r = startRow; r < startRow + 3; ++r)
        {
            for (int c = startCol; c < startCol + 3; ++c)
            {
                if (board_[r][c] == v)
                    return false;
            }
        }

        return true;
    }

    bool backtrack(int start)
    {
        if (start == SIZE * SIZE)
            return true;

        auto point = idxToPoint(start);

        if (board_[point.row][point.col] != '.')
            return backtrack(start + 1);

        for (auto i = 1; i < 10; i++)
        {
            if (!isValid(point.row, point.col, i + '0'))
                continue;

            board_[point.row][point.col] = i + '0';
            if (backtrack(start + 1))
                return true;
            board_[point.row][point.col] = '.';
        }

        return false;
    }
};
