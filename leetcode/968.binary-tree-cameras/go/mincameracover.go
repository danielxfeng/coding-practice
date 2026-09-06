package mincameracover

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func minCameraCover(root *TreeNode) int {
	count := 0

	var traversal func(*TreeNode) int

	traversal = func(node *TreeNode) int {
		if node == nil {
			return 2
		}

		left := traversal(node.Left)
		right := traversal(node.Right)

		if left == 0 || right == 0 {
			count++
			return 1
		}

		if left == 1 || right == 1 {
			return 2
		}

		return 0
	}

	if traversal(root) == 0 {
		count++
	}

	return count
}
