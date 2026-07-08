package removefromend

type ListNode struct {
	Val  int
	Next *ListNode
}

func buildLinkList(vals ...int) *ListNode {
	dummy := &ListNode{}
	curr := dummy

	for _, v := range vals {
		curr.Next = &ListNode{Val: v}
		curr = curr.Next
	}

	return dummy.Next
}

func equalLists(l1 *ListNode, l2 *ListNode) bool {
	if l1 == nil && l2 == nil {
		return true
	}

	if l1 == nil || l2 == nil {
		return false
	}

	if l1.Val != l2.Val {
		return false
	}

	return equalLists(l1.Next, l2.Next)
}

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
