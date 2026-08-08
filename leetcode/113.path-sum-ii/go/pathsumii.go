package pathsumii

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func pathSum(root *TreeNode, targetSum int) [][]int {
	return traversal(root, targetSum, []int{}, 0)
}

func traversal(root *TreeNode, targetSum int, path []int, sum int) [][]int {
	if root == nil {
		return [][]int{}
	}

	sum += root.Val
	path = append(path, root.Val)
	if root.Left == nil && root.Right == nil {
		if sum == targetSum {
			res := make([]int, len(path))
			copy(res, path)
			return [][]int{res}
		}
		return [][]int{}
	}

	res := [][]int{}
	res = append(res, traversal(root.Left, targetSum, path, sum)...)
	res = append(res, traversal(root.Right, targetSum, path, sum)...)

	return res
}
