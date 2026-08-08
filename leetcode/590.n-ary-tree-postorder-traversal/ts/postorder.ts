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
    travelsal(root, res)
    return res
}

const travelsal = (root: _Node | null, res: number[]) => {
    if (root === null) return

    for (const child of root.children)
        travelsal(child, res)

    res.push(root.val)

    return res
}

export default postorder
