package removefromend

type ListNode struct {
	Val  int
	Next *ListNode
}

// N, 1
func removeNthFromEnd(head *ListNode, n int) *ListNode {
	dummy := &ListNode{0, head}

	curr := head
	slowPrev := dummy

	i := 0

	for curr != nil {
		if i >= n {
			slowPrev = slowPrev.Next
		}
		i++
		curr = curr.Next
	}

	slowPrev.Next = slowPrev.Next.Next
	return dummy.Next
}
