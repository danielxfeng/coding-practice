package narytreepreorder

type Node struct {
	Val      int
	Children []*Node
}

func preorder(root *Node) []int {
	res := make([]int, 0)
	return traversal(root, res)
}

func traversal(root *Node, res []int) []int {
	if root == nil {
		return res
	}

	res = append(res, root.Val)

	for _, n := range root.Children {
		res = traversal(n, res)
	}

	return res
}
