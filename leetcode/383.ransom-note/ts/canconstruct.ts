// M + N, 1
const canConstruct = (ransomNote: string, magazine: string): boolean => {
    const m = Array.from({ length: 26 }, () => 0)

    for (const ch of ransomNote) m[dist(ch)]++

    for (const ch of magazine) m[dist(ch)]--

    return !m.some(v => v > 0)
};

const dist = (ch: string): number => {
    return ch.charCodeAt(0) - "a".charCodeAt(0)
}

export default canConstruct
