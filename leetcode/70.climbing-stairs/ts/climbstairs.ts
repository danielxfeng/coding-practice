const climbStairs = (n: number): number => {
    if (n < 3) return n
    
    const arr: number[] = Array.from({ length: 2 })

    const dpFunc = () => {
        const v = arr[0] + arr[1]
        arr[0] = arr[1]
        arr[1] = v
    }

    arr[0] = 1
    arr[1] = 2

    for (let i = 3; i <= n; i++) dpFunc()

    return arr[1]
}
