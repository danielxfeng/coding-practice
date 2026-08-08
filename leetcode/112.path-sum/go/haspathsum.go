package pathsum

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func hasPathSum(root *TreeNode, targetSum int) bool {
	return travelsal(root, targetSum, 0)
}

func travelsal(root *TreeNode, targetSum int, pathSum int) bool {
	if root == nil {
		return false
	}

	pathSum += root.Val

	if root.Left == nil && root.Right == nil {
		return targetSum == pathSum
	}

	if travelsal(root.Left, targetSum, pathSum) {
		return true
	}

	return travelsal(root.Right, targetSum, pathSum)
}
