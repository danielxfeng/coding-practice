package findcommoncharacters

import (
	"reflect"
	"testing"
)

type testcase struct {
	words []string
	want  []string
}

func TestCommonChars(t *testing.T) {
	tcs := []testcase{
		{words: []string{"bella","label","roller"}, want: []string{"e","l","l"}},
		{words: []string{"cool","lock","cook"}, want: []string{"c","o"}},
	}

	for _, tc := range tcs {
		t.Run("commonchars", func(t *testing.T) {
			got := commonChars(tc.words)
			if !reflect.DeepEqual(got, tc.want) {
				t.Fatalf("commonchars, want: %v, got: %v", tc.want, got)
			}
		})
	}
}
