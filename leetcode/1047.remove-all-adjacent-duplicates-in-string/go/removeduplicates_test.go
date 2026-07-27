package removeduplicates

import "testing"

type testcase struct {
	s    string
	want string
}

func TestRemoveDuplicates(t *testing.T) {
	tcs := []testcase{
		{s: "", want: ""},
	}

	for _, tc := range tcs {
		t.Run("removeduplicates", func(t *testing.T){
			got := removeDuplicates(tc.s)

			if got != tc.want {
				t.Fatalf("removeduplicates, want %s, got %s", tc.want, got)
			}
		})
	}
}
