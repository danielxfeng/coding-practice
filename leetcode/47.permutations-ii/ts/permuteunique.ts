const permuteUnique = (nums: number[]): number[][] => {
    const res: number[][] = []

    const backtrack = (start: number) => {
        if (start === nums.length) {
            res.push([...nums])
        }

        const used = new Set<number>()

        for (let i = start; i < nums.length; i++) {
            if (used.has(nums[i])) continue

            used.add(nums[i])

            swap(nums, start, i)
            backtrack(start + 1)
            swap(nums, start, i)
        }
    }

    backtrack(0)
    return res
}

const swap = (nums: number[], a: number, b: number) => {
    const temp = nums[a]
    nums[a] = nums[b]
    nums[b] = temp
}

export default permuteUnique
