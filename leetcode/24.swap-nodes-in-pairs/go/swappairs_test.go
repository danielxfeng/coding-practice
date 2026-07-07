package swappairs

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

func TestSwapPairs(t *testing.T) {
	tcs := []testcase{
		{head: buildLinkList(), want: buildLinkList()},
		{head: buildLinkList(), want: buildLinkList()},
		{head: buildLinkList(), want: buildLinkList()},
	}

	for _, tc := range tcs {
		t.Run(fmt.Sprintf("%v -> %v", tc.head, tc.want), func(t *testing.T) {
			got := swapPairs(tc.head)
			if !equalLists(got, tc.want) {
				t.Fatalf("swappairs, expect: %v, got: %v", tc.want, got)
			}
		})
	}
}
