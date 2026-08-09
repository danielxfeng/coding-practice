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

const hasPathSum = (root: TreeNode | null, targetSum: number): boolean => {
    return traversal(root, targetSum, 0)
}

const traversal = (root: TreeNode | null, targetSum: number, pathSum: number): boolean => {
    if (root === null) return false

    pathSum += root.val
    if (root.left === null && root.right === null) return targetSum === pathSum

    if (traversal(root.left, targetSum, pathSum)) return true
    return traversal(root.right, targetSum, pathSum)
}

export default hasPathSum
