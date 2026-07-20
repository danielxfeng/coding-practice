package reversestr

import "testing"

type testcase struct {
	s    string
	k    int
	want string
}

func TestReverseStr(t *testing.T) {
	tcs := []testcase{
		{s: "abcd", k: 2, want: "bacd"},
		{s: "abcdefg", k: 2, want: "bacdfeg"},
	}

	for _, tc := range tcs {
		got := reverseStr(tc.s, tc.k)
		if got != tc.want {
			t.Fatalf("reversestr, want: %s, got: %s", tc.want, got)
		}
	}
}
