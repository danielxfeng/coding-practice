const largestSumAfterKNegations = (nums: number[], k: number): number => {
    nums.sort((a, b) => Math.abs(b) - Math.abs(a))
    let res = 0

    for (const v of nums) {
        if (v < 0 && k > 0) {
            res += Math.abs(v)
            k--
            continue
        }
        res += v
    }

    if (k % 2 === 1) res -= 2 * Math.abs(nums[nums.length - 1])

    return res
}
