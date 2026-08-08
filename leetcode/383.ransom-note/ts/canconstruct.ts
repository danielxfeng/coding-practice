// M + N, 1
const canConstruct = (ransomNote: string, magazine: string): boolean => {
    const requiredCharacterCounts = Array.from({ length: 26 }, () => 0)

    for (const ch of ransomNote) requiredCharacterCounts[dist(ch)]++

    for (const ch of magazine) requiredCharacterCounts[dist(ch)]--

    return !requiredCharacterCounts.some(v => v > 0)
};

const dist = (ch: string): number => {
    return ch.charCodeAt(0) - "a".charCodeAt(0)
}

export default canConstruct
