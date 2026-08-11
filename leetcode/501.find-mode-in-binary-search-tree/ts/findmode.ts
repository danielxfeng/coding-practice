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

const findMode = (root: TreeNode | null): number[] => {
    let res: number[] = []
    let prev: TreeNode | null = null
    let maxNum = 0
    let currNum = 0

    const traversal = (node: TreeNode | null) => {
        if (node === null) return

        traversal(node.left)

        if (prev === null || prev.val !== node.val) currNum = 1
        else currNum++

        if (currNum > maxNum) {
            maxNum = currNum
            res = [node.val]
        } else if (currNum === maxNum)
            res.push(node.val)

        prev = node
        traversal(node.right)
    }

    traversal(root)
    return res
}

export default findMode
