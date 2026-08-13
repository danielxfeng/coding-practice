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

const convertBST = (root: TreeNode | null): TreeNode | null => {
    let prev = 0

    const traversal = (node: TreeNode | null): TreeNode | null => {
        if (node === null) return null

        node.right = traversal(node.right)
        node.val += prev
        prev = node.val
        node.left = traversal(node.left)

        return node
    }

    return traversal(root)
}
