
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
    const queue: _Node[] = []
    let front = 0

    if (root !== null) queue.push(root)

    while (queue.length > front) {
        const size = queue.length - front
        const layer: number[] = Array(size)

        for (let i = 0; i < size; i++) {
            const curr = queue[front++]

            layer[i] = curr.val

            for (const child of curr.children)
                if (child !== null) queue.push(child)
        }

        res.push(layer)
    }

    return res
}

export default levelOrder
