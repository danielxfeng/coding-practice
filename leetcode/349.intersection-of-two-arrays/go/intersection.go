package intersectionoftwoarrays

func intersection(nums1 []int, nums2 []int) []int {
	s1 := make(map[int]struct{})
	s2 := make(map[int]struct{})

	for _, n := range nums1 {
		s1[n] = struct{}{}
	}

	for _, n := range nums2 {
		if _, ok := s1[n]; ok {
			s2[n] = struct{}{}
		}
	}

	keys := make([]int, 0, len(s2))
	for k := range s2 {
		keys = append(keys, k)
	}
	return keys
}
