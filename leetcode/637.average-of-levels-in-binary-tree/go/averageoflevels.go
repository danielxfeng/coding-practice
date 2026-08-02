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

		layer := make([]int, size)

		for i := range size {
			curr := deque.Remove(deque.Front()).(*TreeNode)

			layer[i] = curr.Val

			if curr.Left != nil {
				deque.PushBack(curr.Left)
			}

			if curr.Right != nil {
				deque.PushBack(curr.Right)
			}
		}

		avg := 0

		for _, v := range layer {
			avg += v
		}

		res = append(res, float64(avg)/float64(len(layer)))
	}

	return res
}
