package inverttree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func invertTree(root *TreeNode) *TreeNode {
	swapNodes(root)
	return root
}

func swapNodes(root *TreeNode) {
	if root == nil {
		return
	}

	temp := root.Left
	root.Left = root.Right
	root.Right = temp

	swapNodes(root.Left)
	swapNodes(root.Right)
}
