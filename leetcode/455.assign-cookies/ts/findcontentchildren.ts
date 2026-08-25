const findContentChildren = (g: number[], s: number[]): number => {
    g.sort((a, b) => a - b)
    s.sort((a, b) => a - b)

    let res = 0
    let j = 0

    for (const c of s) {
        if (j >= g.length) break

        if (c < g[j]) continue

        j++
        res++
    }

    return res
}
