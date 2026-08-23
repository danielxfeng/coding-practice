const SIZE = 9

const solveSudoku = (board: string[][]): void => {
    backtrack(board, 0);
}

const backtrack = (board: string[][], start: number): boolean => {
    if (start === SIZE * SIZE) return true

    const [row, col] = idxToPoint(start)

    if (board[row][col] !== ".") return backtrack(board, start + 1)

    for (let i = 1; i < 10; i++) {
        if (!isValid(board, row, col, i.toString())) continue

        board[row][col] = i.toString()

        if (backtrack(board, start + 1)) return true

        board[row][col] = "."
    }

    return false;
}

const isValid = (board: string[][], row: number, col: number, v: string): boolean => {
    for (let i = 0; i < SIZE; i++) {
        if (board[row][i] === v) return false
        if (board[i][col] === v) return false
    }

    const startRow = Math.floor(row / 3) * 3
    const startCol = Math.floor(col / 3) * 3

    for (let r = startRow; r < startRow + 3; r++) {
        for (let c = startCol; c < startCol + 3; c++) {
            if (board[r][c] === v) return false
        }
    }

    return true
}

const idxToPoint = (idx: number): [number, number] => {
    return [Math.floor(idx / SIZE), idx % SIZE]
}

export default solveSudoku
