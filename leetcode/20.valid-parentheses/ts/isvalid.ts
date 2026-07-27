const popStack = (arr: string[]): string[] => {
    if (arr.length === 0) return arr

    return arr.slice(0, arr.length - 1)
}

const peekStack = (arr: string[]): string | null => {
    if (arr.length === 0) return null

    return arr[arr.length - 1]
}

const pushStack = (arr: string[], v: string): string[] => {
    arr.push(v)
    return arr
}

const isEmptyStack = (arr: string[]): boolean => {
    return arr.length === 0
}

const isValid = (s: string): boolean => {
    let stack: string[] = []

    for (const c of s) {
        const prev = peekStack(stack)
        if (prev !== null && isMatched(prev, c)) stack = popStack(stack)
        else pushStack(stack, c)
    }

    return isEmptyStack(stack)
}

const isMatched = (s1: string, s2: string): boolean => {
    if (s1 === '(' && s2 === ')') return true
    if (s1 === '[' && s2 === ']') return true
    if (s1 === '{' && s2 === '}') return true
    return false
}

export default isValid
