package connect

import "container/list"

type Node struct {
	Val   int
	Left  *Node
	Right *Node
	Next  *Node
}

func connect(root *Node) *Node {
	queue := list.New()

	if root != nil {
		queue.PushBack(root)
	}

	for queue.Len() > 0 {
		size := queue.Len()

		var prev *Node
		for i := range size {
			curr := queue.Remove(queue.Front()).(*Node)

			if i > 0 {
				prev.Next = curr
			}

			prev = curr

			if curr.Left != nil {
				queue.PushBack(curr.Left)
			}

			if curr.Right != nil {
				queue.PushBack(curr.Right)
			}
		}
	}

	return root
}
