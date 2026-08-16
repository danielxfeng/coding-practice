const combinationSum2 = (candidates: number[], target: number): number[][] => {
    const res: number[][] = []
    const path: number[] = []
    let sum = 0

    const backtrack = (start: number) => {
        if (sum === target) {
            res.push([...path])
            return
        }

        for (let i = start; i < candidates.length; i++) {
            if (sum + candidates[i] > target) break
            if (i > start && candidates[i] === candidates[i - 1]) continue

            path.push(candidates[i])
            sum += candidates[i]
            backtrack(i + 1)
            sum -= candidates[i]
            path.pop()
        }
    }

    candidates.sort((a, b) => a - b)
    backtrack(0)
    return res
}
