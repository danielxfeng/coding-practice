// N, K
const isAnagram = (s: string, t: string): boolean => {
    if (t.length !== s.length) return false

    const m = new Map<string, number>()

    for (const c of s) {
        const v = m.get(c) ?? 0
        m.set(c, v + 1)
    }

    for (const c of t) {
        const v = m.get(c) ?? 0
        if (v <= 0) return false
        m.set(c, v - 1)
    }

    return true
};

export default isAnagram
