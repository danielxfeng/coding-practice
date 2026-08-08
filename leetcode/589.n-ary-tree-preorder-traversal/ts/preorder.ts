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
    travelsal(root, res)

    return res
}

const travelsal = (root: _Node | null, res: number[]) => {
    if (root === null) return

    res.push(root.val)

    for (const child of root.children) {
        travelsal(child, res)
    }
}

export default preorder
