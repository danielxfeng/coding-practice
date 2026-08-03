package connect

import "container/list"

type Node struct {
	Val   int
	Left  *Node
	Right *Node
	Next  *Node
}

func connect(root *Node) *Node {
	deque := list.New()

	if root != nil {
		deque.PushBack(root)
	}

	for deque.Len() > 0 {
		size := deque.Len()

		var prev *Node
		for i := range size {
			curr := deque.Remove(deque.Front()).(*Node)

			if i > 0 {
				prev.Next = curr
			}

			prev = curr

			if curr.Left != nil {
				deque.PushBack(curr.Left)
			}

			if curr.Right != nil {
				deque.PushBack(curr.Right)
			}
		}
	}

	return root
}
