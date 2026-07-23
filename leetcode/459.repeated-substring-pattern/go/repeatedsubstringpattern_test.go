package repeatsubstringpattern

import "testing"

type testcase struct {
	s    string
	want bool
}

func TestRepeatSubStringPattern(t *testing.T) {
	tcs := []testcase{
		{s: "abab", want: true},
		{s: "aba", want: false},
		{s: "abcabcabcabc", want: true},
	}

	for _, tc := range tcs {
		t.Run("repeatsubstringpattern", func(t *testing.T) {
			got := repeatedSubstringPattern(tc.s)
			if got != tc.want {
				t.Fatalf("repeatsubstringpattern, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
