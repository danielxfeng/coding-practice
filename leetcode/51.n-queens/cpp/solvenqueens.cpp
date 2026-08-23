#include <vector>
#include <string>

class Solution
{
public:
    std::vector<std::vector<std::string>> solveNQueens(int n)
    {
        board_ = std::vector<std::vector<char>>(
            n, std::vector<char>(n, '.'));
        backtrack(n, 0);
        return res_;
    }

private:
    std::vector<std::vector<std::string>> res_{};
    std::vector<std::vector<char>> board_{};

    bool isValid(int n, int row, int col)
    {
        for (int i = 0; i < row; i++)
        {
            if (board_[i][col] == 'Q')
                return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (board_[i][j] == 'Q')
                return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        {
            if (board_[i][j] == 'Q')
                return false;
        }
        return true;
    }

    std::vector<std::string> joinBoard(int n)
    {
        std::vector<std::string> res(n);

        for (int i = 0; i < n; i++)
            res[i] = std::string(board_[i].begin(), board_[i].end());

        return res;
    }

    void backtrack(int n, int start)
    {
        if (start == n)
        {
            res_.push_back(joinBoard(n));
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (!isValid(n, start, i))
                continue;

            board_[start][i] = 'Q';
            backtrack(n, start + 1);
            board_[start][i] = '.';
        }
    }
};
