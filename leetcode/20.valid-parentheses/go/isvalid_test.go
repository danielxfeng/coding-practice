package isvalid

import "testing"

type testcase struct {
	s    string
	want bool
}

func TestIsValid(t *testing.T) {
	tcs := []testcase{
		{s: "()", want: true},
		{s: "()[]{}", want: true},
		{s: "(]", want: false},
		{s: "([])", want: true},
		{s: "([)]", want: false},
	}

	for _, tc := range tcs {
		t.Run("isvalid", func(t *testing.T) {
			got := isValid(tc.s)
			if got != tc.want {
				t.Fatalf("isvalid, want %v, got %v", tc.want, got)
			}
		})
	}
}
