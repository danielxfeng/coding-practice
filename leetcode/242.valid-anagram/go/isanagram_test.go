package validanagram

import "testing"

type testcase struct {
	s    string
	t    string
	want bool
}

func TestIsAnagram(t *testing.T) {
	tcs := []testcase{
		{s: "anagram", t: "nagaram", want: true},
		{s: "rat", t: "car", want: false},
		{s: "ra", t: "ard", want: false},
	}

	for _, tc := range tcs {
		t.Run("isanagram", func(t *testing.T) {
			got := isAnagram(tc.s, tc.t)
			if got != tc.want {
				t.Fatalf("isanagram, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
