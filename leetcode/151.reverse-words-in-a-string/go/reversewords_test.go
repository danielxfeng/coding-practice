package reversewords

import "testing"

type testcase struct {
	s    string
	want string
}

func TestReverseWords(t *testing.T) {
	tcs := []testcase{
		{s: "the sky is blue", want: "blue is sky the"},
		{s: "  hello world  ", want: "world hello"},
		{s: "a good   example", want: "example good a"},
	}

	for _, tc := range tcs {
		got := reverseWords(tc.s)
		if got != tc.want {
			t.Fatalf("reversewords, want %s, got %s", tc.want, got)
		}
	}
}
