package mindepth

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func minDepth(root *TreeNode) int {
	deque := list.New()
	depth := 0

	if root != nil {
		deque.PushBack(root)
	}

	for deque.Len() > 0 {
		size := deque.Len()
		depth++

		for range size {
			curr := deque.Remove(deque.Front()).(*TreeNode)

			if curr.Left == nil && curr.Right == nil {
				return depth
			}

			if curr.Left != nil {
				deque.PushBack(curr.Left)
			}

			if curr.Right != nil {
				deque.PushBack(curr.Right)
			}
		}
	}
	
	return depth
}
