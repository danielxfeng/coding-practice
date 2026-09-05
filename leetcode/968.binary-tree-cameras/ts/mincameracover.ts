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

const minCameraCover = (root: TreeNode | null): number => {
    let count = 0

    const traversal = (root: TreeNode | null): number => {
        if (root === null) return 2

        const left = traversal(root.left)
        const right = traversal(root.right)

        if (left === 0 || right === 0) {
            count++
            return 1
        }

        if (left === 1 || right === 1) {
            return 2
        }

        return 0
    }

    if (traversal(root) === 0) count++

    return count
}
