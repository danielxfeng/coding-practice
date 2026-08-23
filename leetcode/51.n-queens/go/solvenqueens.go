package nqueens

func solveNQueens(n int) [][]string {
	res := make([][]string, 0)

	board := make([][]byte, n)
	for i := range board {
		board[i] = make([]byte, n)
		for j := range board[i] {
			board[i][j] = '.'
		}
	}

	isValid := func(row int, col int) bool {
		for i := range row {
			if board[i][col] == 'Q' {
				return false
			}
		}

		for i, j := row-1, col-1; i >= 0 && j >= 0; i, j = i-1, j-1 {
			if board[i][j] == 'Q' {
				return false
			}
		}

		for i, j := row-1, col+1; i >= 0 && j < n; i, j = i-1, j+1 {
			if board[i][j] == 'Q' {
				return false
			}
		}

		return true
	}

	var backtrack func(int)

	backtrack = func(row int) {
		if row == n {
			solution := make([]string, n)
			for i := range board {
				solution[i] = string(board[i])
			}
			res = append(res, solution)
			return
		}

		for col := range n {
			if !isValid(row, col) {
				continue
			}

			board[row][col] = 'Q'
			backtrack(row + 1)
			board[row][col] = '.'
		}
	}

	backtrack(0)
	return res
}
