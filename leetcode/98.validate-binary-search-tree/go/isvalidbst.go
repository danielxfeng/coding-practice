package isvalidbst

import "math"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isValidBST(root *TreeNode) bool {
	return traversal(root, math.MinInt64, math.MaxInt64)
}

func traversal(root *TreeNode, min int64, max int64) bool {
	if root == nil {
		return true
	}

	val := int64(root.Val)

	if val <= min || val >= max {
		return false
	}

	if !traversal(root.Left, min, val) {
		return false
	}

	return traversal(root.Right, val, max)
}
