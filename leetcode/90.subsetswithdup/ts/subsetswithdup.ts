const subsetsWithDup = (nums: number[]): number[][] => {
    const res: number[][] = []
    const path: number[] = []

    const backtrack = (start: number) => {
        res.push([...path])
        if (start === nums.length) return

        for (let i = start; i < nums.length; i++) {
            if (i > start && nums[i] === nums[i - 1]) continue

            path.push(nums[i])
            backtrack(i + 1)
            path.pop()
        }
    }

    nums.sort((a, b) => a - b)
    backtrack(0)
    return res
}
