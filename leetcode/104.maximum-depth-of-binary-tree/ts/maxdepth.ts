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

function maxDepth(root: TreeNode | null): number {
    const queue: TreeNode[] = []
    let front = 0
    let depth = 0

    if (root !== null) queue.push(root)

    while (queue.length > front) {
        const size = queue.length - front
        depth++

        for (let i = 0; i < size; i++) {
            const curr = queue[front++]

            if (curr.left !== null) queue.push(curr.left)
            if (curr.right !== null) queue.push(curr.right)
        }
    }

    return depth
}

export default maxDepth
