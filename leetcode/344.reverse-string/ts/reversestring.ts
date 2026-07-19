// N, 1
const reverseString = (s: string[]): void => {
    let start = 0
    let end = s.length - 1

    while (start < end) {
        const temp = s[start]
        s[start] = s[end]
        s[end] = temp

        start++
        end--
    }
};

export default reverseString
