const combinationSum3 = (k: number, n: number): number[][] => {
    const res: number[][] = []
    const path: number[] = []
    let sum = 0

    const backtrack = (k: number, n: number, start: number) => {
        if (path.length === k && sum === n) {
            res.push([...path])
            return
        }

        for (let i = start; i <= 9; i++) {
            if (sum + i > n) return

            path.push(i)
            sum += i
            backtrack(k, n, i + 1);
            sum -= i
            path.pop()
        }
    }

    backtrack(k, n, 1)

    return res
}
