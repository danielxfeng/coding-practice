const twoSum = (nums: number[], target: number): number[] => {
    return twoSumOptimized(nums, target);
};

// N, N
const twoSumOptimized = (nums: number[], target: number): number[] => {
    const m = new Map<number, number>();

    for (let i = 0; i < nums.length; i++) {
        const idx = m.get(target - nums[i]);
        if (idx !== undefined) return [idx, i];
        m.set(nums[i], i);
    }

    return [];
}

// N, 1
const twoSumBruteForce = (nums: number[], target: number): number[] => {
    for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] === target) {
                return [i, j];
            }
        }
    }
    return [];
};

export default twoSum;