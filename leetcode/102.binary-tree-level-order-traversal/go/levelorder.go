package levelorder

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func levelOrder(root *TreeNode) [][]int {
	res := [][]int{}
	queue := list.New()

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()

		level := make([]int, size)
		for i := range size {
			curr := queue.Remove(queue.Front()).(*TreeNode)

			level[i] = curr.Val

			if curr.Left != nil {
				queue.PushBack(curr.Left)
			}

			if curr.Right != nil {
				queue.PushBack(curr.Right)
			}
		}

		res = append(res, level)
	}

	return res
}
