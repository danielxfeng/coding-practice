const removeElement = (nums: number[], val: number): number => {
    return removeElementOptimized(nums, val);
};

const removeElementOptimized = (nums: number[], val: number): number => {
    let s = 0

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === val) continue

        swap(nums, i, s);
        s++
    }

    return s
};

const swap = (nums: number[], a: number, b: number) => {
    const temp = nums[a]
    nums[a] = nums[b]
    nums[b] = temp
}

export default removeElement;
