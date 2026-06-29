package binarysearch

func search(nums []int, target int) int {
	return searchBruteForce(nums, target)
}

// LogN, LogN
func searchOptimized(nums []int, target int) int {
	return searchHelper(nums, target, 0, len(nums))
}

func searchHelper(nums []int, target int, start int, end int) int {
	if end <= start {
		return -1
	}

	mid := start + (end-start)/2
	midValue := nums[mid]

	if target == midValue {
		return mid
	}

	if target < midValue {
		return searchHelper(nums, target, start, mid)
	}

	return searchHelper(nums, target, mid+1, end)
}

// N, 1
func searchBruteForce(nums []int, target int) int {
	for i, v := range nums {
		if v == target {
			return i
		}
	}

	return -1
}
