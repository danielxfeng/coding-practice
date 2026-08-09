
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

const buildTree = (inorder: number[], postorder: number[]): TreeNode | null => {
    if (inorder.length === 0 || inorder.length !== postorder.length) return null

    const prev = new TreeNode()
    traversal(inorder, 0, inorder.length, postorder, 0, postorder.length, prev, true)
    return prev.left
}

const traversal = (inorder: number[], inLeft: number, inRight: number, postorder: number[], postLeft: number, postRight: number, prev: TreeNode, isLeft: boolean) => {
    if (inLeft >= inRight) return

    const rootVal = postorder[postRight - 1]
    const root = new TreeNode(rootVal)
    if (isLeft) prev.left = root
    else prev.right = root

    const splitIdx = findIdx(inorder, inLeft, inRight, rootVal)
    postRight--

    const leftLen = splitIdx - inLeft

    traversal(inorder, inLeft, splitIdx, postorder, postLeft, postLeft + leftLen, root, true)
    traversal(inorder, splitIdx + 1, inRight, postorder, postLeft + leftLen, postRight, root, false)
}

const findIdx = (nums: number[], left: number, right: number, target: number): number => {
    for (let i = left; i < right; i++)
        if (nums[i] === target) return i
    return -1
}

export default buildTree
