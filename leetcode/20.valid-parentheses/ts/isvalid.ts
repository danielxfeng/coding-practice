const popStack = (stack: string[]): string[] => {
    if (stack.length === 0) return stack

    return stack.slice(0, stack.length - 1)
}

const peekStack = (stack: string[]): string | null => {
    if (stack.length === 0) return null

    return stack[stack.length - 1]
}

const pushStack = (stack: string[], v: string): string[] => {
    stack.push(v)
    return stack
}

const isEmptyStack = (stack: string[]): boolean => {
    return stack.length === 0
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
