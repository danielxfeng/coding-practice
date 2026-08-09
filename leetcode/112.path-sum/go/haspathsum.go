package pathsum

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func hasPathSum(root *TreeNode, targetSum int) bool {
	return traversal(root, targetSum, 0)
}

func traversal(root *TreeNode, targetSum int, pathSum int) bool {
	if root == nil {
		return false
	}

	pathSum += root.Val

	if root.Left == nil && root.Right == nil {
		return targetSum == pathSum
	}

	if traversal(root.Left, targetSum, pathSum) {
		return true
	}

	return traversal(root.Right, targetSum, pathSum)
}
