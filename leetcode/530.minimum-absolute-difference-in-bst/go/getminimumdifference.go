package getmindiff

import (
	"math"
)

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func getMinimumDifference(root *TreeNode) int {
	var prev *TreeNode
	minDiff := math.MaxInt

	var traversal func(node *TreeNode)

	traversal = func(node *TreeNode) {
		if node == nil {
			return
		}

		traversal(node.Left)

		if prev != nil {
			diff := abs(node.Val - prev.Val)
			if diff < minDiff {
				minDiff = diff
			}
		}

		prev = node

		traversal(node.Right)
	}

	traversal(root)
	return minDiff
}

func abs(v int) int {
	if v >= 0 {
		return v
	}
	return -v
}
