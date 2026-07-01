package sortedsquares

import (
	"fmt"
	"reflect"
	"testing"
)

type testcase struct {
	nums []int
	want []int
}

func TestSortedSquares(t *testing.T) {
	tcs := []testcase{
		{nums: []int{-4, -1, 0, 3, 10}, want: []int{0, 1, 9, 16, 100}},
		{nums: []int{-7, -3, 2, 3, 11}, want: []int{4, 9, 9, 49, 121}},
	}

	for _, tc := range tcs {
		t.Run(fmt.Sprintf("%v -> %v", tc.nums, tc.want), func(t *testing.T) {
			got := sortedSquares(tc.nums)
			if !reflect.DeepEqual(got, tc.want) {
				t.Fatalf("sortedsquare, expected: %v, got: %v", tc.want, got)
			}
		})
	}
}
