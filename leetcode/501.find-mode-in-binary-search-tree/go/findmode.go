package findmodeinbst

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func findMode(root *TreeNode) []int {
	var prev *TreeNode
	res := make([]int, 0)
	maxNum := 0
	currNum := 0

	var traversal func(*TreeNode)

	traversal = func(node *TreeNode) {
		if node == nil {
			return
		}

		traversal(node.Left)

		if prev != nil && prev.Val == node.Val {
			currNum++
		} else {
			currNum = 1
		}

		if currNum == maxNum {
			res = append(res, node.Val)
		} else if currNum > maxNum {
			maxNum = currNum
			res = []int{node.Val}
		}

		prev = node

		traversal(node.Right)
	}

	traversal(root)

	return res
}
