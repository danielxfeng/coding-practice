const canJump = (nums: number[]): boolean => {
    let maximum = 0

    for (let i = 0; i < nums.length; i++) {
        if (maximum >= nums.length - 1) return true

        if (i > maximum) return false

        if (i + nums[i] > maximum) maximum = i + nums[i]
    }

    return false
}
