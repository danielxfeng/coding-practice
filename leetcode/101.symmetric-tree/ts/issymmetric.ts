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

const isSymmetric = (root: TreeNode | null): boolean => {
    if (root === null) return true
    return compare(root.left, root.right)
}

const compare = (left: TreeNode | null, right: TreeNode | null): boolean => {
    if (left === null && right === null) return true
    if (left === null || right === null) return false
    if (left.val !== right.val) return false

    if (!compare(left.right, right.left)) return false
    return compare(left.left, right.right)
}

export default isSymmetric
