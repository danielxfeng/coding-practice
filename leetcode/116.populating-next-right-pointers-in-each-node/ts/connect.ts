class _Node {
    val: number
    left: _Node | null
    right: _Node | null
    next: _Node | null
    constructor(val?: number, left?: _Node, right?: _Node, next?: _Node) {
        this.val = (val === undefined ? 0 : val)
        this.left = (left === undefined ? null : left)
        this.right = (right === undefined ? null : right)
        this.next = (next === undefined ? null : next)
    }
}

const connect = (root: _Node | null): _Node | null => {
    const queue: _Node[] = []
    let front = 0

    if (root !== null) queue.push(root)

    while (queue.length > front) {
        const size = queue.length - front

        let prev: _Node | null = null

        for (let i = 0; i < size; i++) {
            const curr = queue[front++]
            if (i > 0) prev!.next = curr
            prev = curr

            if (curr.left !== null) queue.push(curr.left)
            if (curr.right !== null) queue.push(curr.right)
        }
    }

    return root;
}

export default connect
