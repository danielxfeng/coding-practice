const solveNQueens = (n: number): string[][] => {
    const res: string[][] = []
    const board: string[][] = new Array(n).fill(0).map(_ => new Array(n).fill('.'))

    const backtrack = (start: number) => {
        if (start === n) {
            res.push(joinBoard(board))
        }

        for (let i = 0; i < n; i++) {
            if (!isValid(board, start, i)) continue

            board[start][i] = "Q"
            backtrack(start + 1)
            board[start][i] = "."
        }
    }

    backtrack(0)
    return res;
}

const isValid = (board: string[][], row: number, col: number): boolean => {
    const n: number = board.length;
    if (col < 0 || col >= n || row < 0 || row >= n) return false;
    for (let row of board)
        if (row[col] === 'Q') return false;

    let x: number = col,
        y: number = row;
    while (y >= 0 && x < n)
        if (board[y--][x++] === 'Q') return false;

    x = col;
    y = row;
    while (x >= 0 && y >= 0)
        if (board[y--][x--] === 'Q') return false;

    return true;
}

const joinBoard = (board: string[][]): string[] => {
    const res: string[] = []
    board.forEach(row => res.push(row.join('')))
    return res
}

export default solveNQueens
