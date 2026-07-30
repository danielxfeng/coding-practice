package topk

import "sort"

type pair struct {
	k int
	c int
}

func topKFrequent(nums []int, k int) []int {
	m := make(map[int]int)

	for _, n := range nums {
		m[n]++
	}

	items := make([]pair, 0, len(m))

	for k, v := range m {
		items = append(items, pair{k, v})
	}

	sort.Slice(items, func(i, j int) bool {
		return items[i].c > items[j].c
	})

	res := make([]int, k)

	for i := range k {
		res[i] = items[i].k
	}

	return res
}
