package narytreepostorder

type Node struct {
	Val      int
	Children []*Node
}

func postorder(root *Node) []int {
	res := make([]int, 0)
	return travelsal(root, res)
}

func travelsal(root *Node, res []int) []int {
	if root == nil {
		return res
	}

	for _, n := range root.Children {
		res = travelsal(n, res)
	}

	res = append(res, root.Val)

	return res
}
