const letterCombinations = (digits: string): string[] => {
    const letters = ["abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
    const res: string[] = []
    const path: string[] = []

    const backtrack = (start: number) => {
        if (path.length === digits.length) {
            res.push(path.join(""))
            return
        }

        const options = letters[Number(digits[start]) - 2]

        for (let i = 0; i < options.length; i++) {
            path.push(options[i])
            backtrack(start + 1)
            path.pop()
        }
    }

    backtrack(0)

    return res
}
