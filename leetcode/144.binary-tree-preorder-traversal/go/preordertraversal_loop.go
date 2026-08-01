package preordertraversal

import "container/list"

func preorderTraversalloop(root *TreeNode) []int {
	if root == nil {
		return []int{}
	}

	res := make([]int, 0)
	stack := list.New()

	stack.PushBack(root)

	for stack.Len() > 0 {
		curr := stack.Remove(stack.Back()).(*TreeNode)

		res = append(res, curr.Val)

		if curr.Right != nil {
			stack.PushBack(curr.Right)
		}

		if curr.Left != nil {
			stack.PushBack(curr.Left)
		}
	}

	return res
}
