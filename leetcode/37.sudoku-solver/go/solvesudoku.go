package solvesudoku

func solveSudoku(board [][]byte) {
	var backtrack func(int) bool

	backtrack = func(start int) bool {
		if start == 81 {
			return true
		}

		row, col := idxToPoints(start)

		if board[row][col] != '.' {
			return backtrack(start + 1)
		}

		for i := byte('1'); i <= '9'; i++ {
			if !isValid(board, row, col, i) {
				continue
			}

			board[row][col] = i

			if backtrack(start + 1) {
				return true
			}

			board[row][col] = '.'
		}

		return false
	}

	backtrack(0)
}

func pointsToIdx(row int, col int) int {
	return row*9 + col
}

func idxToPoints(idx int) (int, int) {
	return idx / 9, idx % 9
}

func isValid(board [][]byte, row, col int, v byte) bool {
	for i := range 9 {
		if board[row][i] == v {
			return false
		}
		if board[i][col] == v {
			return false
		}
	}

	startRow := (row / 3) * 3
	startCol := (col / 3) * 3

	for r := startRow; r < startRow+3; r++ {
		for c := startCol; c < startCol+3; c++ {
			if board[r][c] == v {
				return false
			}
		}
	}

	return true
}
