package strstr

import "testing"

type testcase struct {
	haystack string
	needle   string
	want     int
}

func TestStrStr(t *testing.T) {
	tcs := []testcase{
		{haystack: "sadbutsad", needle: "sad", want: 0},
		{haystack: "leetcode", needle: "leeto", want: -1},
	}

	for _, tc := range tcs {
		t.Run("strstr", func(t *testing.T) {
			got := strStr(tc.haystack, tc.needle)
			if got != tc.want {
				t.Fatalf("strstr, want %d, got %d", tc.want, got)
			}
		})
	}
}
