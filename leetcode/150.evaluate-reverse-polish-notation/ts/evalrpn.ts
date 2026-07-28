const popStack = (arr: number[]): number[] => {
    if (arr.length === 0) return arr

    return arr.slice(0, arr.length - 1)
}

const peekStack = (arr: number[]): number | null => {
    if (arr.length === 0) return null

    return arr[arr.length - 1]
}

const pushStack = (arr: number[], v: number): number[] => {
    arr.push(v)
    return arr
}

const isEmptyStack = (arr: number[]): boolean => {
    return arr.length === 0
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
