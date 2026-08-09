package sumofleftleaves

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func sumOfLeftLeaves(root *TreeNode) int {
	return traversal(root, false)
}

func traversal(root *TreeNode, isLeft bool) int {
	if root == nil {
		return 0
	}

	if isLeft && root.Left == nil && root.Right == nil {
		return root.Val
	}

	return traversal(root.Left, true) + traversal(root.Right, false)
}
