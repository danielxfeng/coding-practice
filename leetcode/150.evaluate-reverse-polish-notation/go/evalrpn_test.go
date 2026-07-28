package evalrpn

import "testing"

type testcase struct {
	tokens []string
	want   int
}

func TestEvalRpn(t *testing.T) {
	tcs := []testcase{
		{tokens: []string{"2", "1", "+", "3", "*"}, want: 9},
		{tokens: []string{"4", "13", "5", "/", "+"}, want: 6},
		{tokens: []string{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"}, want: 22},
	}

	for _, tc := range tcs {
		got := evalRPN(tc.tokens)
		if got != tc.want {
			t.Fatalf("evalrpn, want %d, got %d", tc.want, got)
		}
	}
}
