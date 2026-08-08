package sumofleftleaves

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func sumOfLeftLeaves(root *TreeNode) int {
	return travelsal(root, false)
}

func travelsal(root *TreeNode, isLeft bool) int {
	if root == nil {
		return 0
	}

	if isLeft && root.Left == nil && root.Right == nil {
		return root.Val
	}

	return travelsal(root.Left, true) + travelsal(root.Right, false)
}
