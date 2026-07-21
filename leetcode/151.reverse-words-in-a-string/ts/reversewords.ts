const reverseWords = (s: string): string => {
    const spaceRemoved = resolveSpace(s)
    const reversedBytes = resolveLine(spaceRemoved)
    return resolveWords(reversedBytes)
};

const resolveSpace = (s: string): string[] => {
    const str: string[] = Array.from({ length: s.length })

    let idx = 0

    for (let i = 0; i < s.length; i++) {
        if (s[i] === ' ') continue

        if (idx > 0 && s[i - 1] === ' ') str[idx++] = ' '
        str[idx++] = s[i]
    }

    return str.slice(0, idx)
}

const resolveLine = (s: string[]): string[] => {
    let start = 0
    let end = s.length - 1

    while (start < end) {
        const temp = s[start]
        s[start] = s[end]
        s[end] = temp

        start++
        end--
    }

    return s
}

const resolveWords = (s: string[]): string => {
    let start = 0
    for (let i = 0; i <= s.length; i++) {
        if (i === s.length || s[i] === ' ') {
            let end = i - 1
            while (start < end) {
                const temp = s[start]
                s[start] = s[end]
                s[end] = temp

                start++
                end--
            }

            start = i + 1
        }
    }

    return s.join("")
}

export default reverseWords
