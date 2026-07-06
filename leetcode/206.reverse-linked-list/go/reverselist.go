package reverselist

type ListNode struct {
	Val  int
	Next *ListNode
}

// N, 1
func reverseList(head *ListNode) *ListNode {
	if head == nil {
		return nil
	}

	prev := head
	curr := head.Next

	for curr != nil {
		next := curr.Next
		curr.Next = prev
		prev = curr
		curr = next
	}

	head.Next = nil
	return prev
}
