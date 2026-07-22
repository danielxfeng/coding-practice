const strStr = (haystack: string, needle: string): number => {
    const next = getNextArr(needle)

    let j = 0
    for (let i = 0; i < haystack.length; i++) {
        while (j > 0 && haystack[i] !== needle[j]) j = next[j - 1]

        if (haystack[i] === needle[j]) j++

        if (j === needle.length) return i - needle.length + 1
    }

    return -1
}

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

export default strStr
