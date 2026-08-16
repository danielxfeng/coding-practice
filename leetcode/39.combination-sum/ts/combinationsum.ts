const combinationSum = (candidates: number[], target: number): number[][] => {
    const res : number[][] = []
    const path : number[] = []
    let sum = 0

    const backtrack = (start: number) => {
        if (sum === target) {
            res.push([...path])
            return
        }

        for (let i = start; i < candidates.length; i++) {
            if (sum + candidates[i] > target) continue

            path.push(candidates[i])
            sum += candidates[i]
            backtrack(i)
            sum -= candidates[i]
            path.pop()
        }
    }

    backtrack(0)
    return res
}
