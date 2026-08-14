const combine = (n: number, k: number): number[][] => {
    const res: number[][] = []
    const path: number[] = []

    const backtrace = (n: number, k: number, start: number) => {
        if (path.length === k) {
            res.push([...path])
            return
        }

        for (let i = start; i <= n; i++) {
            if (n - i + 1 < k - path.length) break
            
            path.push(i)
            backtrace(n, k, i + 1)
            path.pop()
        }
    }

    backtrace(n, k, 1)

    return res
}
