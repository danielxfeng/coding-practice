class _Node {
    val: number
    children: _Node[]
    constructor(val?: number) {
        this.val = (val === undefined ? 0 : val)
        this.children = []
    }
}

const postorder = (root: _Node | null): number[] => {
    const res: number[] = []
    traversal(root, res)
    return res
}

const traversal = (root: _Node | null, res: number[]) => {
    if (root === null) return

    for (const child of root.children)
        traversal(child, res)

    res.push(root.val)

    return res
}

export default postorder
