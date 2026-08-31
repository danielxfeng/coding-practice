const eraseOverlapIntervals = (intervals: number[][]): number => {
    if (intervals.length < 2) return 0

    intervals.sort((a, b) => {
        if (a[1] !== b[1]) return a[1] - b[1]
        return a[0] - b[0]
    })

    let prevIdx = 0
    let res = 0

    for (let i = 1; i < intervals.length; i++) {
        if (intervals[i][0] < intervals[prevIdx][1]) {
            res++
            continue
        }

        prevIdx = i
    }

    return res
}
