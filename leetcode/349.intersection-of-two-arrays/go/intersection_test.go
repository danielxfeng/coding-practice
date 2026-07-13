package intersectionoftwoarrays

import (
	"reflect"
	"testing"
)

type testcase struct {
	nums1 []int
	nums2 []int
	want  []int
}

func TestIntersection(t *testing.T) {
	tcs := []testcase{
		{nums1: []int{1, 2, 2, 1}, nums2: []int{2, 2}, want: []int{2}},
		{nums1: []int{4, 9, 5}, nums2: []int{9, 4, 9, 8, 4}, want: []int{9, 4}},
	}

	for _, tc := range tcs {
		t.Run("intersection", func(t *testing.T) {
			got := intersection(tc.nums1, tc.nums2)
			if !reflect.DeepEqual(got, tc.want) {
				t.Fatalf("intersection, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
