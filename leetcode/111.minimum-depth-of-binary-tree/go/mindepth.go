package mindepth

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func minDepth(root *TreeNode) int {
	queue := list.New()
	depth := 0

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()
		depth++

		for range size {
			curr := queue.Remove(queue.Front()).(*TreeNode)

			if curr.Left == nil && curr.Right == nil {
				return depth
			}

			if curr.Left != nil {
				queue.PushBack(curr.Left)
			}

			if curr.Right != nil {
				queue.PushBack(curr.Right)
			}
		}
	}

	return depth
}
