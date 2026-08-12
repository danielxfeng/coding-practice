package deletenodebst

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func deleteNode(root *TreeNode, key int) *TreeNode {
	if root == nil {
		return nil
	}

	if root.Val != key {
		if root.Val < key {
			root.Right = deleteNode(root.Right, key)
		} else {
			root.Left = deleteNode(root.Left, key)
		}

		return root
	}

	if root.Left == nil && root.Right == nil {
		return nil
	}

	if root.Left == nil {
		return root.Right
	}

	if root.Right == nil {
		return root.Left
	}

	newRoot := root.Right
	curr := root.Right

	for curr.Left != nil {
		curr = curr.Left
	}

	curr.Left = root.Left
	return newRoot
}
