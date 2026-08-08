const popStack = (stack: number[]): number[] => {
    if (stack.length === 0) return stack

    return stack.slice(0, stack.length - 1)
}

const peekStack = (stack: number[]): number | null => {
    if (stack.length === 0) return null

    return stack[stack.length - 1]
}

const pushStack = (stack: number[], v: number): number[] => {
    stack.push(v)
    return stack
}

const isEmptyStack = (stack: number[]): boolean => {
    return stack.length === 0
}

const evalRPN = (tokens: string[]): number => {
    let stack: number[] = []

    for (const v of tokens) {
        if (["+", "-", "*", "/"].indexOf(v) === -1) {
            const n = parseInt(v)
            if (isNaN(n)) return 0
            stack.push(n)
            continue
        }

        const n2 = peekStack(stack)
        if (n2 === null) return 0
        stack = popStack(stack)

        const n1 = peekStack(stack)
        if (n1 === null) return 0
        stack = popStack(stack)

        let res = 0

        switch (v) {
            case "+":
                res = n1 + n2
                break
            case "-":
                res = n1 - n2
                break
            case "*":
                res = n1 * n2
                break
            case "/":
                res = Math.trunc(n1 / n2)
                break
            default:
                return 0
        }

        pushStack(stack, res)
    }

    const res = peekStack(stack)
    stack = popStack(stack)

    if (res === null || !isEmptyStack(stack)) return 0

    return res
};

export default evalRPN
