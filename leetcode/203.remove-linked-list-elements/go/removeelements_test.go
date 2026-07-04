package removeelements

import "testing"

type testcase struct {
	head *ListNode
	val  int
	want *ListNode
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

func TestRemoveElements(t *testing.T) {
	tcs := []testcase{
		{head: buildLinkList(1, 2, 6, 3, 4, 5, 6), val: 6, want: buildLinkList(1, 2, 3, 4, 5)},
		{head: buildLinkList(), val: 1, want: buildLinkList()},
		{head: buildLinkList(7, 7, 7, 7), val: 7, want: buildLinkList()},
	}

	for _, tc := range tcs {
		t.Run("removeelements", func(t *testing.T) {
			got := removeElements(tc.head, tc.val)
			if !equalLists(tc.want, got) {
				t.Fatalf("removeelements, %v, %d, expect %v, got %v", tc.head, tc.val, tc.want, got)
			}
		})
	}
}
