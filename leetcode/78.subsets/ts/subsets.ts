const subsets = (nums: number[]): number[][] => {
    const res: number[][] = []
    const path: number[] = []

    const backtrack = (start: number) => {
        res.push([...path])
        if (start === nums.length) return

        for (let i = start; i < nums.length; i++) {
            path.push(nums[i])
            backtrack(i + 1)
            path.pop()
        }
    }

    backtrack(0)
    return res
}
