package getintersectionnode

type ListNode struct {
	Val  int
	Next *ListNode
}

// M+N, M
func getIntersectionNode(headA, headB *ListNode) *ListNode {
	s := make(map[*ListNode]struct{})

	for headA != nil {
		s[headA] = struct{}{}
		headA = headA.Next
	}

	for headB != nil {
		if _, exist := s[headB]; exist {
			return headB
		}
		headB = headB.Next
	}

	return nil
}
