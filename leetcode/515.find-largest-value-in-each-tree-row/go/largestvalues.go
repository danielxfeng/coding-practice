package largestvalues

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func largestValues(root *TreeNode) []int {
	res := make([]int, 0)
	queue := list.New()

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()

		max := 0
		for i := range size {
			curr := queue.Remove(queue.Front()).(*TreeNode)

			if i == 0 || curr.Val > max {
				max = curr.Val
			}

			if curr.Left != nil {
				queue.PushBack(curr.Left)
			}

			if curr.Right != nil {
				queue.PushBack(curr.Right)
			}
		}

		res = append(res, max)
	}

	return res
}
