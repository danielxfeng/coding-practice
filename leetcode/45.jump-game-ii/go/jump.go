package jumpgameii

func jump(nums []int) int {
	if len(nums) < 2 {
		return 0
	}

	res := 0
	curr := 0
	next := 0

	for i, v := range nums {
		if v+i > next {
			next = v + i
		}

		if i == curr {
			res++
			curr = next

			if curr >= len(nums)-1 {
				break
			}
		}

	}

	return res
}
