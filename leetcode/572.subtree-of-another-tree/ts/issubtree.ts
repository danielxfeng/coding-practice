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

const isSubtree = (root: TreeNode | null, subRoot: TreeNode | null): boolean => {
    if (root === null || subRoot === null) return false

    if (root.val === subRoot.val && isSameTree(root, subRoot)) return true

    if (isSubtree(root.left, subRoot)) return true

    return isSubtree(root.right, subRoot)
}

const isSameTree = (p: TreeNode | null, q: TreeNode | null): boolean => {
    if (p === null && q === null) return true
    if (p === null || q === null) return false
    if (p.val !== q.val) return false

    if (!isSameTree(p.left, q.left)) return false
    return isSameTree(p.right, q.right)
}

export default isSubtree
