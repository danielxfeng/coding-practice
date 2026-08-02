class TreeNode {
    val: number
    left: TreeNode | null
    right: TreeNode | null
    constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.left = (left === undefined ? null : left)
        this.right = (right === undefined ? null : right)
    }
}

const averageOfLevels = (root: TreeNode | null): number[] => {
    const res: number[] = []
    const deque: TreeNode[] = []
    let front = 0

    if (root !== null) deque.push(root)

    while (deque.length > front) {
        const size = deque.length - front

        let subtotal = 0
        for (let i = 0; i < size; i++) {
            const curr = deque[front++]
            subtotal += curr.val
            if (curr.left !== null) deque.push(curr.left)
            if (curr.right !== null) deque.push(curr.right)
        }

        res.push(subtotal / size)
    }

    return res
}

export default averageOfLevels
