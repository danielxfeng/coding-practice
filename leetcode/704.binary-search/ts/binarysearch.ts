const search = (nums: number[], target: number): number => {
    return searchOptimized(nums, target)
};

// LogN, logN
const searchOptimized = (nums: number[], target: number): number => {
    return searchHelper(nums, target, 0, nums.length)
}

const searchHelper = (nums: number[], target: number, start: number, end: number): number => {
    if (start >= end) return -1

    const mid = Math.floor(start + (end - start) / 2)
    const midValue = nums[mid]

    if (midValue === target) return mid

    if (target < midValue) return searchHelper(nums, target, start, mid);

    return searchHelper(nums, target, mid + 1, end)
}

// N, 1
const searchBruteForce = (nums: number[], target: number): number => {
    return nums.findIndex(n => n === target)
}

export default search;