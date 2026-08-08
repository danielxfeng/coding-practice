package averageoflevels

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func averageOfLevels(root *TreeNode) []float64 {
	res := make([]float64, 0)
	queue := list.New()

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()

		subtotal := 0.0

		for range size {
			curr := queue.Remove(queue.Front()).(*TreeNode)

			subtotal += float64(curr.Val)

			if curr.Left != nil {
				queue.PushBack(curr.Left)
			}

			if curr.Right != nil {
				queue.PushBack(curr.Right)
			}
		}

		res = append(res, subtotal/float64(size))
	}

	return res
}
