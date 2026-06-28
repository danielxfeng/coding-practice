package twosum

import (
	"fmt"
	"reflect"
	"testing"
)

type testCase struct {
	nums   []int
	target int
	want   []int
}

func TestTwoSum(t *testing.T) {

	cases := []testCase{
		{
			nums:   []int{2, 7, 11, 15},
			target: 9,
			want:   []int{0, 1},
		},
		{
			nums:   []int{3, 2, 4},
			target: 6,
			want:   []int{1, 2},
		},
		{
			nums:   []int{3, 3},
			target: 6,
			want:   []int{0, 1},
		},
	}

	for _, tc := range cases {
		t.Run(fmt.Sprintf("%v -> %d", tc.nums, tc.target), func(t *testing.T) {
			got := twoSum(tc.nums, tc.target)

			if !reflect.DeepEqual(got, tc.want) {
				t.Fatalf("twoSum, %v -> %d, expected %v, got %v", tc.nums, tc.target, tc.want, got)
			}
		})
	}
}
