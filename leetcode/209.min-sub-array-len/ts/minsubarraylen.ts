const minSubArrayLen = (target: number, nums: number[]): number => {
    return minSubArrayLenOptimized(target, nums)
};

// N, 1
const minSubArrayLenOptimized = (target: number, nums: number[]): number => {
    let minimumLength = nums.length + 1
    let l = 0
    let sum = 0

    for (let r = 0; r < nums.length; r++) {
        sum += nums[r]

        while (sum >= target) {
            const len = r - l + 1
            if (len < minimumLength) minimumLength = len

            sum -= nums[l]
            l++
        }
    }

    return minimumLength === nums.length + 1 ? 0 : minimumLength
};

export default minSubArrayLen
