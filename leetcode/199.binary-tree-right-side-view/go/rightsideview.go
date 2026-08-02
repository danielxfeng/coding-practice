package rightsideview

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func rightSideView(root *TreeNode) []int {
	res := make([]int, 0)
	deque := list.New()

	if root != nil {
		deque.PushBack(root)
	}

	for deque.Len() > 0 {
		size := deque.Len()

		for i := range size {
			curr := deque.Remove(deque.Front()).(*TreeNode)

			if i == size-1 {
				res = append(res, curr.Val)
			}

			if curr.Left != nil {
				deque.PushBack(curr.Left)
			}

			if curr.Right != nil {
				deque.PushBack(curr.Right)
			}
		}
	}

	return res
}
