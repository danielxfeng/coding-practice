package countnodes

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func countNodes(root *TreeNode) int {
	if root == nil {
		return 0
	}

	left := root.Left
	right := root.Right

	count := 0

	for left != nil && right != nil {
		count++
		left = left.Left
		right = right.Right
	}

	if left == nil && right == nil {
		return 2 << count - 1
	}

	return 1 + countNodes(root.Left) + countNodes(root.Right)
}
