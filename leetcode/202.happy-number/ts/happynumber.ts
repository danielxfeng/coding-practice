const isHappy = (n: number): boolean => {
    const seenNumbers = new Set<number>()

    while (true) {
        n = sumSquares(n)
        if (n === 1) return true
        if (seenNumbers.has(n)) return false
        seenNumbers.add(n)
    }

};

const sumSquares = (n: number): number => {
    let total = 0

    while (n > 0) {
        const r = n % 10
        n = Math.floor(n / 10)
        total += r * r
    }

    return total
}

export default isHappy
