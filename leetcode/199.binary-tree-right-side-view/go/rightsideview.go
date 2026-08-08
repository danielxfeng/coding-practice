package rightsideview

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func rightSideView(root *TreeNode) []int {
	res := make([]int, 0)
	queue := list.New()

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()

		for i := range size {
			curr := queue.Remove(queue.Front()).(*TreeNode)

			if i == size-1 {
				res = append(res, curr.Val)
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
