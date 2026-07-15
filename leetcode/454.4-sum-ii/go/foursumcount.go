package foursumcount

// N2, N2
func fourSumCount(nums1 []int, nums2 []int, nums3 []int, nums4 []int) int {
	s := make(map[int]int)
	res := 0

	for _, n1 := range nums1 {
		for _, n2 := range nums2 {
			s[n1+n2]++
		}
	}

	for _, n3 := range nums3 {
		for _, n4 := range nums4 {
			if v, exist := s[-n3-n4]; exist {
				res += v
			}
		}
	}

	return res
}
