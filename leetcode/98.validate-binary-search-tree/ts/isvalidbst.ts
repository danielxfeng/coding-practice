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

const isValidBST = (root: TreeNode | null): boolean => {
    return traversal(root, -Infinity, Infinity)
}

const traversal = (root: TreeNode | null, min: number, max: number): boolean => {
    if (root === null) return true

    if (root.val <= min || root.val >= max) return false;

    if (!traversal(root.left, min, root.val)) return false;

    return traversal(root.right, root.val, max)
}

export default isValidBST
