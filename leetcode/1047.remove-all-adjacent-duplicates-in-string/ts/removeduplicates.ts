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

const removeDuplicates = (s: string): string => {
    let stack: string[] = []

    for (const ch of s) {
        if (!isEmptyStack(stack) && peekStack(stack) === ch) stack = popStack(stack)
        else pushStack(stack, ch)
    }

    return stack.join("")
}

export default removeDuplicates
