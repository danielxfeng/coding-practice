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

const findBottomLeftValue = (root: TreeNode | null): number => {
    const queue: TreeNode[] = []
    let front = 0
    let res = 0

    if (root !== null) queue.push(root)

    while (queue.length - front > 0) {
        const size = queue.length - front

        for (let i = 0; i < size; i++) {
            const curr = queue[front++]

            if (i == 0) res = curr.val
            if (curr.left !== null) queue.push(curr.left)
            if (curr.right !== null) queue.push(curr.right)
        }
    }

    return res
}

export default findBottomLeftValue
