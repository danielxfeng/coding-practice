package reverselist

import (
	"fmt"
	"testing"
)

type testcase struct {
	head *ListNode
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

func TestReverseList(t *testing.T) {
	tcs := []testcase{
		{head: buildLinkList(1, 2, 3, 4, 5), want: buildLinkList(5, 4, 3, 2, 1)},
		{head: buildLinkList(1, 2), want: buildLinkList(2, 1)},
		{head: buildLinkList(), want: buildLinkList()},
	}

	for _, tc := range tcs {
		t.Run(fmt.Sprintf("reverselist %v -> %v", tc.head, tc.want), func(t *testing.T) {
			got := reverseList(tc.head)
			if !equalLists(tc.want, got) {
				t.Fatalf("reverselist: expect %v, got %v", tc.want, got)
			}
		})
	}
}
