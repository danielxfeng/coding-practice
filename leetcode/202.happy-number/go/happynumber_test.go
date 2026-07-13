package happynumber

import (
	"testing"
)

type testcase struct {
	n    int
	want bool
}

func TestHappyNumber(t *testing.T) {
	tcs := []testcase{
		{n: 19, want: true},
		{n: 2, want: false},
	}

	for _, tc := range tcs {
		t.Run("happynumber", func(t *testing.T) {
			got := isHappy(tc.n)
			if got != tc.want {
				t.Fatalf("happynumber: want: %v, got: %v", tc.want, got)
			}
		})
	}
}
