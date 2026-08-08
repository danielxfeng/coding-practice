const popStack = (stack: string[]): void => {
    stack.pop()
}

const peekStack = (stack: string[]): string | null => {
    if (stack.length === 0) return null

    return stack[stack.length - 1]
}

const pushStack = (stack: string[], v: string): void => {
    stack.push(v)
}

const isEmptyStack = (stack: string[]): boolean => {
    return stack.length === 0
}

const removeDuplicates = (s: string): string => {
    const stack: string[] = []

    for (const ch of s) {
        if (!isEmptyStack(stack) && peekStack(stack) === ch) popStack(stack)
        else pushStack(stack, ch)
    }

    return stack.join("")
}

export default removeDuplicates
