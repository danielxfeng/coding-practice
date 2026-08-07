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

const binaryTreePaths = (root: TreeNode | null): string[] => {
    return travelsal(root, "")
}

const travelsal = (root: TreeNode | null, path: string): string[] => {
    if (root === null) return []

    const val = root.val.toString()
    if (path === "") path = val
    else path += "->" + val

    if (root.left === null && root.right === null) return [path]

    const res: string[] = []
    res.push(...travelsal(root.left, path))
    res.push(...travelsal(root.right, path))

    return res
}

export default binaryTreePaths
