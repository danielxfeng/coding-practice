package canconstruct

import "testing"

type testcase struct {
	ransomNote string
	magazine   string
	want       bool
}

func TestCanConstruct(t *testing.T) {
	tcs := []testcase{
		{ransomNote: "a", magazine: "b", want: false},
		{ransomNote: "aa", magazine: "ab", want: false},
		{ransomNote: "aa", magazine: "aab", want: true},
	}

	for _, tc := range tcs {
		t.Run("canconstruct", func(t *testing.T) {
			got := canConstruct(tc.ransomNote, tc.magazine)
			if got != tc.want {
				t.Fatalf("canconstruct, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
