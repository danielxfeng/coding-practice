package removeelment

import (
	"fmt"
	"reflect"
	"testing"
)

type testcase struct {
	nums     []int
	val      int
	want     int
	wantNums []int
}

func TestRemoveElement(t *testing.T) {
	tcs := []testcase{
		{nums: []int{3, 2, 2, 3}, val: 3, want: 2, wantNums: []int{2, 2}},
		{nums: []int{0, 1, 2, 2, 3, 0, 4, 2}, val: 2, want: 5, wantNums: []int{0, 1, 3, 0, 4}},
		{nums: []int{}, val: 2, want: 0, wantNums: []int{}},
		{nums: []int{0, 0, 0}, val: 0, want: 0, wantNums: []int{}},
	}

	for _, tc := range tcs {
		t.Run(fmt.Sprintf("%v, %d -> %d, %v", tc.nums, tc.val, tc.want, tc.wantNums), func(t *testing.T) {
			got := removeElement(tc.nums, tc.val)
			if !reflect.DeepEqual(tc.nums[:got], tc.wantNums) || tc.want != got {
				t.Fatalf("removelement, %v, %d, expected %d, %v, got %d", tc.nums, tc.val, tc.want, tc.wantNums, got)
			}
		})
	}
}
