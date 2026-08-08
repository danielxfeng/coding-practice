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

const sumOfLeftLeaves = (root: TreeNode | null): number => {
    return travelsal(root, false)
}

const travelsal = (root: TreeNode | null, isLeft: boolean): number => {
    if (root === null) return 0

    if (isLeft && root.left === null && root.right === null) return root.val

    return travelsal(root.left, true) + travelsal(root.right, false)
}

export default sumOfLeftLeaves
