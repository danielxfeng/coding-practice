package maximumdepthofnarytree

type Node struct {
	Val      int
	Children []*Node
}

func maxDepth(root *Node) int {
	return getDepth(root, 0)
}

func getDepth(node *Node, depth int) int {
	if node == nil {
		return depth
	}

	depth++
	maxDepth := depth

	for _, n := range node.Children {
		localDepth := getDepth(n, depth)

		if localDepth > maxDepth {
			maxDepth = localDepth
		}
	}

	return maxDepth
}
