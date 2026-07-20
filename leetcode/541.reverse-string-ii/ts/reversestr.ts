const reverseStr = (s: string, k: number): string => {
    const str: string[] = Array.from(s)

    for (let i = 0; i < s.length; i += 2 * k) {
        let start = i
        let end = Math.min(i + k, s.length) - 1

        while (start < end) {
            const temp = str[start]
            str[start] = str[end]
            str[end] = temp
            start++
            end--
        }
    }

    return str.join("")
};

export default reverseStr
