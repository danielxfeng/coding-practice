package generatematrix

import (
	"fmt"
	"reflect"
	"testing"
)

type testcase struct {
	n    int
	want [][]int
}

func TestGenerateMatrix(t *testing.T) {
	tcs := []testcase{
		{n: 3, want: [][]int{[]int{1, 2, 3}, []int{8, 9, 4}, []int{7, 6, 5}}},
		{n: 1, want: [][]int{[]int{1}}},
	}

	for _, tc := range tcs {
		t.Run(fmt.Sprintf("%d -> %v", tc.n, tc.want), func(t *testing.T) {
			got := generateMatrix(tc.n)

			if !reflect.DeepEqual(got, tc.want) {
				t.Fatalf("generatematrix, n: %d, want: %v, got: %v", tc.n, tc.want, got)
			}
		})

	}
}
