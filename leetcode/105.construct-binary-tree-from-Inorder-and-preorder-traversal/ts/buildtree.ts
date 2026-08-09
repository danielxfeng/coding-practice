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

const buildTree = (preorder: number[], inorder: number[]): TreeNode | null => {
    if (inorder.length === 0 || inorder.length !== preorder.length) return null

    return traversal(preorder, 0, preorder.length, inorder, 0, inorder.length)
}

const traversal = (preorder: number[], preLeft: number, preRight: number, inorder: number[], inLeft: number, inRight: number): TreeNode | null => {
    if (preLeft >= preRight) return null

    const rootVal = preorder[preLeft]
    const root = new TreeNode(rootVal)

    const splitIdx = findIdx(inorder, inLeft, inRight, rootVal)
    const leftLen = splitIdx - inLeft

    root.left = traversal(preorder, preLeft + 1, preLeft + 1 + leftLen, inorder, inLeft, splitIdx)
    root.right = traversal(preorder, preLeft + 1 + leftLen, preRight, inorder, splitIdx + 1, inRight)

    return root
}

const findIdx = (nums: number[], left: number, right: number, target: number): number => {
    for (let i = left; i < right; i++)
        if (nums[i] === target) return i
    return -1
}

export default buildTree
