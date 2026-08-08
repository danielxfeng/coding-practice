package findbottomleftvalue

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func findBottomLeftValue(root *TreeNode) int {
	queue := list.New()
	res := 0

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()

		for i := range size {
			curr := queue.Remove(queue.Front()).(*TreeNode)

			if i == 0 {
				res = curr.Val
			}

			if curr.Left != nil {
				queue.PushBack(curr.Left)
			}

			if curr.Right != nil {
				queue.PushBack(curr.Right)
			}
		}
	}

	return res
}
