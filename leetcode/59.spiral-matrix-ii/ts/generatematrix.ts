// N, 1
const generateMatrix = (n: number): number[][] => {
    const matrix: number[][] = Array.from({ length: n }, () => new Array(n))

    const mid = Math.floor(n / 2)
    let num = 1
    for (let i = 0; i < mid; i++) {
        const last = n - i - 1

        for (let j = i; j < last; j++) {
            matrix[i][j] = num++
        }

        for (let j = i; j < last; j++) {
            matrix[j][last] = num++
        }

        for (let j = last; j > i; j--) {
            matrix[last][j] = num++
        }

        for (let j = last; j > i; j--) {
            matrix[j][i] = num++
        }
    }

    if (n % 2 == 1) {
        matrix[mid][mid] = num
    }

    return matrix
};

export default generateMatrix
