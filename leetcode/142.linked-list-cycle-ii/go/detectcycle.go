package detectcycle

type ListNode struct {
	Val  int
	Next *ListNode
}

// N, 1
func detectCycle(head *ListNode) *ListNode {
	fast := head
	slow := head

	for fast != nil && fast.Next != nil {
		fast = fast.Next.Next
		slow = slow.Next

		if fast == slow {
			first := head
			second := fast

			for first != second {
				first = first.Next
				second = second.Next
			}

			return first
		}
	}

	return nil
}
