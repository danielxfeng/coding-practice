package minsubarraylen

import (
	"fmt"
	"testing"
)

type testcase struct {
	nums   []int
	target int
	want   int
}

func TestMinSubArrayLen(t *testing.T) {
	tcs := []testcase{
		{nums: []int{2, 3, 1, 2, 4, 3}, target: 7, want: 2},
		{nums: []int{1, 4, 4}, target: 4, want: 1},
		{nums: []int{1, 1, 1, 1, 1, 1, 1, 1}, target: 11, want: 0},
		{nums: []int{}, target: 0, want: 0},
	}

	for _, tc := range tcs {
		t.Run(fmt.Sprintf("%v, %d -> %d", tc.nums, tc.target, tc.want), func(t *testing.T) {
			got := minSubArrayLen(tc.target, tc.nums)
			if got != tc.want {
				t.Fatalf("testminsubarraylen, %v, %d, expected: %d, got %d", tc.nums, tc.target, tc.want, got)
			}
		})
	}
}
