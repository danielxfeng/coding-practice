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

const pathSum = (root: TreeNode | null, targetSum: number): number[][] => {
    return traversal(root, targetSum, [], 0)
}

const traversal = (root: TreeNode | null, targetSum: number, path: number[], pathSum: number): number[][] => {
    if (root === null) return []

    pathSum += root.val
    path.push(root.val)
    if (root.left === null && root.right === null) {
        if (targetSum !== pathSum) return []
        const res = [...path]
        return [res]
    }

    const res: number[][] = []

    res.push(...traversal(root.left, targetSum, [...path], pathSum))
    res.push(...traversal(root.right, targetSum, [...path], pathSum))
    return res
}

export default pathSum