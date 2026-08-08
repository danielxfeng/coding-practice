// N, K
const isAnagram = (s: string, t: string): boolean => {
    if (t.length !== s.length) return false

    const characterCounts = new Map<string, number>()

    for (const c of s) {
        const v = characterCounts.get(c) ?? 0
        characterCounts.set(c, v + 1)
    }

    for (const c of t) {
        const v = characterCounts.get(c) ?? 0
        if (v <= 0) return false
        characterCounts.set(c, v - 1)
    }

    return true
};

export default isAnagram
