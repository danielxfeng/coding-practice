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

const invertTree = (root: TreeNode | null): TreeNode | null => {
    swapNodes(root)
    return root
}

const swapNodes = (root: TreeNode | null) => {
    if (root === null) return

    const temp = root.left
    root.left = root.right
    root.right = temp

    swapNodes(root.left)
    swapNodes(root.right)
}

export default invertTree
