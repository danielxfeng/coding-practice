package topk

import (
	"reflect"
	"sort"
	"testing"
)

type testcase struct {
	nums []int
	k    int
	want []int
}

func TestTopK(t *testing.T) {
	tcs := []testcase{
		{nums: []int{1, 1, 1, 2, 2, 3}, k: 2, want: []int{1, 2}},
		{nums: []int{1}, k: 1, want: []int{1}},
		{nums: []int{1, 2, 1, 2, 1, 2, 3, 1, 3, 2}, k: 2, want: []int{1, 2}},
	}

	for _, tc := range tcs {
		t.Run("topk", func(t *testing.T) {
			got := topKFrequent(tc.nums, tc.k)
			sort.Ints(got)
			sort.Ints(tc.want)

			if !reflect.DeepEqual(tc.want, got) {
				t.Fatalf("topk, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
