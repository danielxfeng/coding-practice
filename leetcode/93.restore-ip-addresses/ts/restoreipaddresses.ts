const restoreIpAddresses = (s: string): string[] => {
    const res: string[] = []
    const path: string[] = []

    const backtrack = (start: number) => {
        if (path.length === 4 && start === s.length) {
            res.push(path.join("."))
            return
        }

        for (let i = start; i < s.length; i++) {
            const part = s.slice(start, i + 1)
            if (!isValidIpPart(part)) break

            path.push(part)
            backtrack(i + 1)
            path.pop()
        }
    }

    backtrack(0)
    return res
}

const isValidIpPart = (s: string): boolean => {
    if (s.length > 1 && s[0] === "0") return false

    if (s.length > 3) return false

    const part = parseInt(s)
    if (Number.isNaN(part)) return false

    return part >= 0 && part <= 255
}

export default restoreIpAddresses
