package levelorderbottom

import (
	levelorder "coding-practice/leetcode/102.binary-tree-level-order-traversal/go"
	"slices"
)

func levelOrderBottom(root *levelorder.TreeNode) [][]int {
	res := levelorder.ExportedLevelOrder(root)

	slices.Reverse(res)
	return res
}
