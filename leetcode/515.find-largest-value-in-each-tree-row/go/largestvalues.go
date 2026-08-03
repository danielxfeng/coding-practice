package largestvalues

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func largestValues(root *TreeNode) []int {
	res := make([]int, 0)
	deque := list.New()

	if root != nil {
		deque.PushBack(root)
	}

	for deque.Len() > 0 {
		size := deque.Len()

		max := 0
		for i := range size {
			curr := deque.Remove(deque.Front()).(*TreeNode)

			if i == 0 || curr.Val > max {
				max = curr.Val
			}

			if curr.Left != nil {
				deque.PushBack(curr.Left)
			}

			if curr.Right != nil {
				deque.PushBack(curr.Right)
			}
		}

		res = append(res, max)
	}

	return res
}
