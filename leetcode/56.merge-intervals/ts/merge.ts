const merge = (intervals: number[][]): number[][] => {
    if (intervals.length === 0) return []

    intervals.sort((a, b) => {
        if (a[0] !== b[0]) return a[0] - b[0]
        return a[1] - b[1]
    })

    const res : number[][] = []
    let left = intervals[0][0]
    let right = intervals[0][1]

    for (let i = 1; i < intervals.length; i++) {
        if (intervals[i][0] > right) {
            res.push([left, right])
            left = intervals[i][0]
            right = intervals[i][1]
            continue
        }

        if (intervals[i][0] < left) left = intervals[i][0]
        if (intervals[i][1] > right) right = intervals[i][1]
    }

    res.push([left, right])

    return res
}
