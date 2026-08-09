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

const constructMaximumBinaryTree = (nums: number[]): TreeNode | null => {
    const prev = new TreeNode()
    traversal(nums, prev, false, 0, nums.length)
    return prev.right
}

const traversal = (nums: number[], prev: TreeNode, isLeft: boolean, left: number, right: number) => {
    const maxIdx = findMaxIdx(nums, left, right)
    if (maxIdx === null) return

    const node = new TreeNode(nums[maxIdx])

    if (isLeft) prev.left = node
    else prev.right = node

    traversal(nums, node, true, left, maxIdx)
    traversal(nums, node, false, maxIdx + 1, right)
}

const findMaxIdx = (nums: number[], left: number, right: number): number | null => {
    if (left >= right) return null

    let maxIdx = left
    for (let i = left; i < right; i++)
        if (nums[i] > nums[maxIdx]) maxIdx = i

    return maxIdx
}

export default constructMaximumBinaryTree
