const permute = (nums: number[]): number[][] => {
    const res: number[][] = []

    const backtrace = (start: number) => {
        if (start === nums.length) {
            res.push([...nums])
        }

        for (let i = start; i < nums.length; i++) {
            swap(nums, start, i)
            backtrace(start + 1)
            swap(nums, start, i)
        }
    }

    backtrace(0)
    return res
}

const swap =(nums: number[], a: number, b: number) => {
    const temp = nums[a]
    nums[a] = nums[b]
    nums[b] = temp
}

export default permute
