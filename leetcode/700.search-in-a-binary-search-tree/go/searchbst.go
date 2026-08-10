package searchbst

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func searchBST(root *TreeNode, val int) *TreeNode {
	if root == nil {
		return nil
	}

	if val == root.Val {
		return root
	}

	left := searchBST(root.Left, val)
	if left != nil {
		return left
	}

	return searchBST(root.Right, val)
}
