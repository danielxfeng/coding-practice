const wiggleMaxLength = (nums: number[]): number => {
    if (nums.length < 2) return nums.length

    let res = 1
    let dir = 0

    for (let i = 1; i < nums.length; i++) {
        const diff = nums[i] - nums[i - 1]

        if (dir === 0 && diff !== 0) {
            if (diff < 0) dir = -1
            else dir = 1

            res++
            continue
        }

        if (diff * dir < 0) {
            res++
            dir *= -1
        }
    }

    return res
}
