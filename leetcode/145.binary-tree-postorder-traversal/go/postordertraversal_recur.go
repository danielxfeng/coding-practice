package postordertraversal

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func postorderTraversal(root *TreeNode) []int {
    res := make([]int, 0)

	return traversal(root, res)
}

func traversal(root *TreeNode, res []int) []int {
	if root == nil {
		return res
	}

	res = traversal(root.Left, res)
	res = traversal(root.Right, res)

	res = append(res, root.Val)

	return res
}
