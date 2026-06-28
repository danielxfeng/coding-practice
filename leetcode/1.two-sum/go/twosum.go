package twosum

func twoSum(nums []int, target int) []int {
	return twoSumOptimized(nums, target)
}

// N, N
func twoSumOptimized(nums []int, target int) []int {
	m := make(map[int]int)

	for i, v := range nums {
		expected := target - v
		if index, ok := m[expected]; ok {
			return []int{index, i}
		}
		m[v] = i;
	}

	return []int{}
}

// N2, 1
func twoSumBruteForce(nums []int, target int) []int {
	for i := range nums {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] == target {
				return []int{i, j}
			}
		}
	}
	return []int{}
}
