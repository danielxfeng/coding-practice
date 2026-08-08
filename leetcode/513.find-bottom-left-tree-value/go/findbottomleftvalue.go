package findbottomleftvalue

import "container/list"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func findBottomLeftValue(root *TreeNode) int {
	lst := list.New()
	res := 0

	if root != nil {
		lst.PushBack(root)
	}

	for lst.Len() > 0 {
		size := lst.Len()

		for i := range size {
			curr := lst.Remove(lst.Front()).(*TreeNode)

			if i == 0 {
				res = curr.Val
			}

			if curr.Left != nil {
				lst.PushBack(curr.Left)
			}

			if curr.Right != nil {
				lst.PushBack(curr.Right)
			}
		}
	}

	return res
}
