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

const postorderTraversal = (root: TreeNode | null): number[] => {
    const res: number[] = []
    traversal(root, res)
    return res
}

const traversal = (root: TreeNode | null, res: number[]) => {
    if (root === null) return

    traversal(root.left, res)
    traversal(root.right, res)
    res.push(root.val)
}

export default postorderTraversal
