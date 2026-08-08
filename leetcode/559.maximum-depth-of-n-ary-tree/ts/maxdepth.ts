class _Node {
    val: number
    children: _Node[]

    constructor(val?: number, children?: _Node[]) {
        this.val = (val === undefined ? 0 : val)
        this.children = (children === undefined ? [] : children)
    }
}


const maxDepth = (root: _Node | null): number => {
    return getDepth(root, 0)
}

const getDepth = (root: _Node | null, depth: number): number => {
    if (root === null) return depth

    depth++
    let maxDepth = depth

    for (const child of root.children) {
        const localDepth = getDepth(child, depth)
        if (localDepth > maxDepth) maxDepth = localDepth
    }

    return maxDepth
}

export default maxDepth
