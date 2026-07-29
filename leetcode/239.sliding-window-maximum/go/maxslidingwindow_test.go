package maxslidingwindow

import (
	"reflect"
	"testing"
)

type testcase struct {
	nums []int
	k    int
	want []int
}

func TestMaxSlidingWindow(t *testing.T) {
	tcs := []testcase{
		{nums: []int{1, 3, -1, -3, 5, 3, 6, 7}, k: 3, want: []int{3, 3, 5, 5, 6, 7}},
	}

	for _, tc := range tcs {
		t.Run("maxslidingwindow", func(t *testing.T) {
			got := maxSlidingWindow(tc.nums, tc.k)
			if !reflect.DeepEqual(got, tc.want) {
				t.Fatalf("maxslidingwindow, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
