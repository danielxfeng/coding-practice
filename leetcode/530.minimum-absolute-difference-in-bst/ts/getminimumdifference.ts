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

const getMinimumDifference = (root: TreeNode | null): number => {
    let prev: TreeNode | null = null
    let minDiff = Infinity

    const traversal = (node: TreeNode | null): void => {
        if (node === null) return

        traversal(node.left)

        if (prev !== null) {
            const diff = Math.abs(node.val - prev.val)
            minDiff = Math.min(minDiff, diff)
        }

        prev = node

        traversal(node.right)
    }

    traversal(root)
    return minDiff
}

export default getMinimumDifference
