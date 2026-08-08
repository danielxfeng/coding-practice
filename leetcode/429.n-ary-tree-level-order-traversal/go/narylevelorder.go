package narylevelorder

import "container/list"

type Node struct {
	Val      int
	Children []*Node
}

func levelOrder(root *Node) [][]int {
	res := make([][]int, 0)
	queue := list.New()

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()

		layer := make([]int, size)
		for i := range size {
			curr := queue.Remove(queue.Front()).(*Node)

			layer[i] = curr.Val

			for _, n := range curr.Children {
				if n != nil {
					queue.PushBack(n)
				}
			}
		}

		res = append(res, layer)
	}

	return res
}
