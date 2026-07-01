const sortedSquares = (nums: number[]): number[] => {
    return sortedSquaresOptimized(nums)
};

// N, N
const sortedSquaresOptimized = (nums: number[]): number[] => {
    let l = 0
    let r = nums.length - 1
    let n = nums.length - 1

    let arr = new Array<number>(nums.length)

    while (n >= 0) {
        const sl = nums[l] * nums[l]
        const sr = nums[r] * nums[r]

        if (sl > sr) {
            arr[n] = sl
            l++
        } else {
            arr[n] = sr
            r--
        }

        n--
    }

    return arr
}

// NlogN, N
const sortedSquaresBruteForce = (nums: number[]): number[] => {
    return nums.map(n => n * n).sort((a, b) => a - b);
}

export default sortedSquares
