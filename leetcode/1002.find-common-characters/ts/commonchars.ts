const commonChars = (words: string[]): string[] => {
    if (words.length === 0) return []

    const c = countWord(words[0])

    for (const w of words.slice(1)) {
        const cl = countWord(w)

        for (let i = 0; i < 26; i++) {
            c[i] = Math.min(c[i], cl[i])
        }
    }

    const res: string[] = []

    for (let i = 0; i < 26; i++) {
        for (let j = 0; j < c[i]; j++) {
            res.push(String.fromCharCode('a'.charCodeAt(0) + i))
        }
    }

    return res
}


const countWord = (word: string): number[] => {
    const c: number[] = Array(26).fill(0)

    for (const ch of word) {
        const i = ch.charCodeAt(0) - 'a'.charCodeAt(0)
        c[i]++
    }

    return c
}

export default commonChars
