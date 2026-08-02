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

const levelOrder = (root: TreeNode | null): number[][] => {
    const res: number[][] = []
    const queue: TreeNode[] = []
    let front = 0

    if (root !== null) queue.push(root)

    while (queue.length > front) {
        const size = queue.length - front
        const layer: number[] = Array(size)

        for (let i = 0; i < size; i++) {
            const curr = queue[front++]
            layer[i] = curr.val

            if (curr.left !== null) queue.push(curr.left)
            if (curr.right !== null) queue.push(curr.right)
        }

        res.push(layer)
    }

    return res
}

export default levelOrder
