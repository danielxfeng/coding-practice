const repeatedSubstringPattern = (s: string): boolean => {
    if (s.length === 0) return false

    const next = getNextArr(s)

    const isLastMatch = next[s.length - 1] > 0
    const isRemainderMatch = s.length % (s.length - next[s.length - 1]) === 0

    return isLastMatch && isRemainderMatch
};

const getNextArr = (s: string): number[] => {
    const next: number[] = Array.from({ length: s.length })
    next[0] = 0

    let j = 0
    for (let i = 1; i < s.length; i++) {
        while (j > 0 && s[i] !== s[j]) j = next[j - 1]

        if (s[i] === s[j]) j++

        next[i] = j
    }

    return next
}

export default repeatedSubstringPattern
