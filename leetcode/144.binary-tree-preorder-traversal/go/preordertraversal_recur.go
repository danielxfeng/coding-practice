package preordertraversal

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func preorderTraversal(root *TreeNode) []int {
	res := make([]int, 0)

	return traversal(root, res)
}

func traversal(root *TreeNode, res []int) []int {
	if root == nil {
		return res
	}

	res = append(res, root.Val)
	res = traversal(root.Left, res)
	res = traversal(root.Right, res)

	return res
}
