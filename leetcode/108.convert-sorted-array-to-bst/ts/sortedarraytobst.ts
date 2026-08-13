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

const sortedArrayToBST = (nums: number[]): TreeNode | null => {
    return traversal(nums, 0, nums.length)
}

const traversal = (nums: number[], left: number, right: number): TreeNode | null => {
    if (left >= right) return null

    const mid = left + Math.floor((right - left) / 2)
    const root = new TreeNode(nums[mid])

    root.left = traversal(nums, left, mid)
    root.right = traversal(nums, mid + 1, right)

    return root
}

export default sortedArrayToBST
