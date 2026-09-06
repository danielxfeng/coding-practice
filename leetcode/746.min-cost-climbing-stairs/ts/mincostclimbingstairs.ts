const minCostClimbingStairs = (cost: number[]): number => {
    const arr: number[] = Array.from({ length: 2 })

    const dpFunc = (i: number) => {
        const v = Math.min(arr[0] + cost[i - 2], arr[1] + cost[i - 1])

        arr[0] = arr[1]
        arr[1] = v
    }

    arr[0] = 0
    arr[1] = 0

    for (let i = 2; i <= cost.length; i++) dpFunc(i)

    return arr[1]
}
