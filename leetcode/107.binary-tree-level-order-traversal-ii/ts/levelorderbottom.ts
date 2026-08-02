import levelOrder, { TreeNode } from "../../102.binary-tree-level-order-traversal/ts/levelorder.js";

const levelOrderBottom = (root: TreeNode | null): number[][] => {
    const res = levelOrder(root)
    return res.reverse()
};

export default levelOrderBottom;
