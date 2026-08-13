package covertbst

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func convertBST(root *TreeNode) *TreeNode {
	prev := 0

	var traversal func(root *TreeNode) *TreeNode

	traversal = func(node *TreeNode) *TreeNode {
		if node == nil {
			return node
		}

		node.Right = traversal(node.Right)
		node.Val += prev
		prev = node.Val
		node.Left = traversal(node.Left)

		return node
	}

	return traversal(root)
}
