package swappairs

type ListNode struct {
	Val  int
	Next *ListNode
}

func swapPairs(head *ListNode) *ListNode {
	dummy := ListNode{}
	dummy.Next = head

	prev := &dummy
	curr := dummy.Next

	for curr != nil && curr.Next != nil {
		next := curr.Next
		nNext := next.Next

		prev.Next = next
		next.Next = curr
		curr.Next = nNext

		prev = curr
		curr = nNext
	}

	return dummy.Next
}
