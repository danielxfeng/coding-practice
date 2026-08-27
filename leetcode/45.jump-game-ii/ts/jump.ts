const jump = (nums: number[]): number => {
    if (nums.length < 2) return 0

    let res = 0
    let curr = 0
    let next = 0

    for (let i = 0; i < nums.length; i++) {
        if (i + nums[i] > next) next = i + nums[i]

        if (i !== curr) continue

        res++
        curr = next
        if (curr >= nums.length - 1) break
    }

    return res
}
