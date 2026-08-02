
class _Node {
    val: number
    children: _Node[]

    constructor(v: number) {
        this.val = v;
        this.children = [];
    }
}

const levelOrder = (root: _Node | null): number[][] => {
    const res: number[][] = []
    const deque: _Node[] = []
    let front = 0

    if (root !== null) deque.push(root)

    while (deque.length > front) {
        const size = deque.length - front
        const layer: number[] = Array(size)

        for (let i = 0; i < size; i++) {
            const curr = deque[front++]

            layer[i] = curr.val

            for (const n of curr.children)
                if (n !== null) deque.push(n)
        }

        res.push(layer)
    }

    return res
}

export default levelOrder
