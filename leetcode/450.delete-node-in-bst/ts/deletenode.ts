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

const deleteNode = (root: TreeNode | null, key: number): TreeNode | null => {
    if (root === null) return null

    if (root.val !== key) {
        if (root.val < key) root.right = deleteNode(root.right, key)
        root.left = deleteNode(root.left, key)
        return root
    }

    if (root.left === null) return root.right
    if (root.right === null) return root.left

    const newRoot = root.right
    let curr = root.right

    while (curr.left !== null) curr = curr.left
    curr.left = root.left
    return newRoot
}
