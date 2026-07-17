package threesum

import (
	"reflect"
	"testing"
)

type testcase struct {
	nums []int
	want [][]int
}

func TestThreeSum(t *testing.T) {
	tcs := []testcase{
		{nums: []int{-1, 0, 1, 2, -1, -4}, want: [][]int{{-1, -1, 2}, {-1, 0, 1}}},
		{nums: []int{0, 1, 1}, want: [][]int{}},
		{nums: []int{0, 0, 0}, want: [][]int{{0, 0, 0}}},
	}

	for _, tc := range tcs {
		t.Run("threesum", func(t *testing.T) {
			got := threeSum(tc.nums)
			if !reflect.DeepEqual(got, tc.want) {
				t.Fatalf("threesum, want %v, got %v", tc.want, got)
			}
		})
	}
}
