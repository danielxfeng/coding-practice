const findMinArrowShots = (points: number[][]): number => {
    if (points.length === 0) return 0

    points.sort((a, b) => {
        if (a[1] !== b[1]) return a[1] - b[1]
        return a[0] - b[0]
    })

    let res = 1
    let bound = points[0][1]

    for (const p of points) {
        if (p[0] <= bound) continue

        res++
        bound = p[1]
    }

    return res
}
