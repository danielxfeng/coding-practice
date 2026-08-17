const partition = (s: string): string[][] => {
    const res: string[][] = []
    const path: string[] = []

    const backtrace = (start: number) => {
        if (start === s.length) {
            res.push([...path])
            return
        }

        for (let i = start; i < s.length; i++) {
            if (!isPalindrome(s, start, i)) continue

            path.push(s.slice(start, i + 1))
            backtrace(i + 1)
            path.pop()
        }
    }

    backtrace(0)
    return res
}

const isPalindrome = (s: string, start: number, end: number): boolean => {
    while (start < end) {
        if (s[start] !== s[end]) return false
        start++
        end--
    }

    return true
}
