package revercestring

import (
	"reflect"
	"testing"
)

type testcase struct {
	s    []byte
	want []byte
}

func TestReverseString(t *testing.T) {
	tcs := []testcase{
		{s: []byte{'h', 'e', 'l', 'l', 'o'}, want: []byte{'o', 'l', 'l', 'e', 'h'}},
		{s: []byte{'H', 'a', 'n', 'n', 'a', 'h'}, want: []byte{'h', 'a', 'n', 'n', 'a', 'H'}},
	}

	for _, tc := range tcs {
		t.Run("reversestring", func(t *testing.T) {
			reverseString(tc.s)
			if !reflect.DeepEqual(tc.s, tc.want) {
				t.Fatalf("reversestring, want: %v, got: %v", tc.want, tc.s)
			}
		})
	}
}
