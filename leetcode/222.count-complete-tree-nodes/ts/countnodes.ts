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

const countNodes = (root: TreeNode | null): number => {
    if (root === null) return 0

    let leftDepth = 0
    let rightDepth = 0

    let left = root.left
    let right = root.right

    while (left !== null) {
        leftDepth++
        left = left.left
    }

    while (right !== null) {
        rightDepth++
        right = right.right
    }

    if (leftDepth === rightDepth) return (2 << leftDepth) - 1

    return 1 + countNodes(root.left) + countNodes(root.right)
}

export default countNodes
