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
	return travelsal(root, "")
}

func travelsal(root *TreeNode, path string) []string {
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

	res = append(res, travelsal(root.Left, path)...)
	res = append(res, travelsal(root.Right, path)...)

	return res
}
