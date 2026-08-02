package averageoflevels

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func averageOfLevels(root *TreeNode) []float64 {
	res := make([]float64, 0)
	deque := list.New()

	if root != nil {
		deque.PushBack(root)
	}

	for deque.Len() > 0 {
		size := deque.Len()

		subtotal := 0.0

		for range size {
			curr := deque.Remove(deque.Front()).(*TreeNode)

			subtotal += float64(curr.Val)

			if curr.Left != nil {
				deque.PushBack(curr.Left)
			}

			if curr.Right != nil {
				deque.PushBack(curr.Right)
			}
		}

		res = append(res, subtotal/float64(size))
	}

	return res
}
