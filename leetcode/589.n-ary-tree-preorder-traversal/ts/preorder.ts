class _Node {
    val: number
    children: _Node[]

    constructor(val?: number, children?: _Node[]) {
        this.val = (val === undefined ? 0 : val)
        this.children = (children === undefined ? [] : children)
    }
}

const preorder = (root: _Node | null): number[] => {
    const res: number[] = []
    traversal(root, res)

    return res
}

const traversal = (root: _Node | null, res: number[]) => {
    if (root === null) return

    res.push(root.val)

    for (const child of root.children) {
        traversal(child, res)
    }
}

export default preorder
