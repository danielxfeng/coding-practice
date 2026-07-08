package removefromend

import "testing"

type testcase struct {
	head *ListNode
	n    int
	want *ListNode
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
