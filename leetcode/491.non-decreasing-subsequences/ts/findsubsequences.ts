const findSubsequences = (nums: number[]): number[][] => {
    const res: number[][] = []
    const path: number[] = []

    const backtrack = (start: number) => {
        if (path.length > 1) res.push([...path])

        const set = new Set<number>()

        for (let i = start; i < nums.length; i++) {
            if (set.has(nums[i])) continue
            if (path.length > 0 && nums[i] < path[path.length - 1]) continue

            set.add(nums[i])
            path.push(nums[i])
            backtrack(i + 1)
            path.pop()
        }
    }

    backtrack(0)
    return res
}
