package getintersectionnode

type ListNode struct {
	Val  int
	Next *ListNode
}

// M+N, M
func getIntersectionNode(headA, headB *ListNode) *ListNode {
	nodesInFirstList := make(map[*ListNode]struct{})

	for headA != nil {
		nodesInFirstList[headA] = struct{}{}
		headA = headA.Next
	}

	for headB != nil {
		if _, exist := nodesInFirstList[headB]; exist {
			return headB
		}
		headB = headB.Next
	}

	return nil
}
