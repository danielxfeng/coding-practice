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

const removeDuplicates = (s: string): string => {
    let stack: string[] = []

    for (const ch of s) {
        if (!isEmptyStack(stack) && peekStack(stack) === ch) stack = popStack(stack)
        else pushStack(stack, ch)
    }

    return stack.join("")
}

export default removeDuplicates
