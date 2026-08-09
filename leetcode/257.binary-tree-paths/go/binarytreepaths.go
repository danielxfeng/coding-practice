package binarytreepaths

import (
	"strconv"
)

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func binaryTreePaths(root *TreeNode) []string {
	return traversal(root, "")
}

func traversal(root *TreeNode, path string) []string {
	if root == nil {
		return nil
	}

	val := strconv.Itoa(root.Val)
	if path == "" {
		path = val
	} else {
		path += "->" + val
	}

	if root.Left == nil && root.Right == nil {
		return []string{path}
	}

	res := []string{}

	res = append(res, traversal(root.Left, path)...)
	res = append(res, traversal(root.Right, path)...)

	return res
}
