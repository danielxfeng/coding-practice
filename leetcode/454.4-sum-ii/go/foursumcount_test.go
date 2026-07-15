package foursumcount

import "testing"

type testcase struct {
	nums1 []int
	nums2 []int
	nums3 []int
	nums4 []int
	want  int
}

func TestFourSumCount(t *testing.T) {
	tcs := []testcase{
		{nums1: []int{1, 2}, nums2: []int{-2, -1}, nums3: []int{-1, 2}, nums4: []int{0, 2}, want: 2},
		{nums1: []int{0}, nums2: []int{0}, nums3: []int{0}, nums4: []int{0}, want: 1},
	}

	for _, tc := range tcs {
		t.Run("forsumcount", func(t *testing.T) {
			got := fourSumCount(tc.nums1, tc.nums2, tc.nums3, tc.nums4)
			if got != tc.want {
				t.Fatalf("forsumcount, want: %d, got: %d", tc.want, got)
			}
		})
	}
}
