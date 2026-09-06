const fib = (n: number): number => {
    if (n < 2) return n

    const arr: number[] = Array.from({ length: 2 })
    
    const dpFunc = (n: number) => {
        const v = arr[0] + arr[1]
        arr[0] = arr[1]
        arr[1] = v
    }
    
    arr[0] = 0
    arr[1] = 1

    for (let i = 2; i <= n; i++) dpFunc(i)

    return arr[1]
}
