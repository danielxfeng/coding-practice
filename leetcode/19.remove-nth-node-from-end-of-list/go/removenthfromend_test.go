package removefromend

import "testing"

type testcase struct {
	head *ListNode
	n    int
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

func TestRemoveNthFromEnd(t *testing.T) {
	tcs := []testcase{
		{head: buildLinkList(1, 2, 3, 4, 5), n: 2, want: buildLinkList(1, 2, 3, 5)},
		{head: buildLinkList(1), n: 1, want: buildLinkList()},
		{head: buildLinkList(1, 2), n: 1, want: buildLinkList(1)},
	}

	for _, tc := range tcs {
		t.Run("removenthfromend", func(t *testing.T) {
			got := removeNthFromEnd(tc.head, tc.n)
			if !equalLists(got, tc.want) {
				t.Fatalf("removenthfromend, want %v, %d, got %v", tc.want, tc.n, got)
			}
		})

	}
}
