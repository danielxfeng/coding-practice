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
    const deque: _Node[] = []
    let front = 0

    if (root !== null) deque.push(root)

    while (deque.length > front) {
        const size = deque.length - front

        let prev: _Node | null = null

        for (let i = 0; i < size; i++) {
            const curr = deque[front++]
            if (i > 0) prev!.next = curr
            prev = curr

            if (curr.left !== null) deque.push(curr.left)
            if (curr.right !== null) deque.push(curr.right)
        }
    }

    return root;
}

export default connect
