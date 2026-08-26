const maxSubArray = (nums: number[]): number => {
    if (nums.length === 0) return 0

    let res = nums[0]
    let cur = 0

    for (const v of nums) {
        cur += v

        if (cur > res) res = cur
        if (cur < 0) cur = 0
    }

    return res
}
