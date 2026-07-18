package foursum

import (
	"reflect"
	"testing"
)

type testcase struct {
	nums   []int
	target int
	want   [][]int
}

func TestFourSum(t *testing.T) {
	tcs := []testcase{
		{nums: []int{1, 0, -1, 0, -2, 2}, target: 0, want: [][]int{{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}}},
		{nums: []int{2, 2, 2, 2, 2}, target: 8, want: [][]int{{2, 2, 2, 2}}},
	}

	for _, tc := range tcs {
		t.Run("foursum", func(t *testing.T) {
			got := fourSum(tc.nums, tc.target)
			if !reflect.DeepEqual(tc.want, got) {
				t.Fatalf("foursum, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
