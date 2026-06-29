package binarysearch

import (
	"fmt"
	"testing"
)

type testCase struct {
	nums   []int
	target int
	want   int
}

func TestSearch(t *testing.T) {
	cases := []testCase{
		{nums: []int{-1, 0, 3, 5, 9, 12}, target: 9, want: 4},
		{nums: []int{-1, 0, 3, 5, 9, 12}, target: 2, want: -1},
	}

	for _, tc := range cases {
		t.Run(fmt.Sprintf("%v -> %d", tc.nums, tc.target), func(t *testing.T) {
			got := search(tc.nums, tc.target)

			if got != tc.want {
				t.Fatalf("binarysearch, %v -> %d, expected %d, got %d", tc.nums, tc.target, tc.want, got)
			}
		})
	}
}
