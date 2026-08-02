package narylevelorder

import "container/list"

type Node struct {
	Val      int
	Children []*Node
}

func levelOrder(root *Node) [][]int {
	res := make([][]int, 0)
	deque := list.New()

	if root != nil {
		deque.PushBack(root)
	}

	for deque.Len() > 0 {
		size := deque.Len()

		layer := make([]int, size)
		for i := range size {
			curr := deque.Remove(deque.Front()).(*Node)

			layer[i] = curr.Val

			for _, n := range curr.Children {
				if n != nil {
					deque.PushBack(n)
				}
			}
		}

		res = append(res, layer)
	}

	return res
}
