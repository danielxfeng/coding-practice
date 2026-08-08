package intersectionoftwoarrays

func intersection(nums1 []int, nums2 []int) []int {
	firstSet := make(map[int]struct{})
	intersectionSet := make(map[int]struct{})

	for _, n := range nums1 {
		firstSet[n] = struct{}{}
	}

	for _, n := range nums2 {
		if _, ok := firstSet[n]; ok {
			intersectionSet[n] = struct{}{}
		}
	}

	keys := make([]int, 0, len(intersectionSet))
	for k := range intersectionSet {
		keys = append(keys, k)
	}
	return keys
}
