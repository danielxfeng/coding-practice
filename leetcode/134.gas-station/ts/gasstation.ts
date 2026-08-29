const canCompleteCircuit = (gas: number[], cost: number[]): number => {
    let res = 0
    let total = 0
    let curr = 0

    for (let i = 0; i < gas.length; i++) {
        const v = gas[i] - cost[i]

        total += v
        curr += v

        if (curr < 0) {
            res = i + 1
            curr = 0
        }
    }

    if (total < 0) return -1
    return res
}
