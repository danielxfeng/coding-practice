package mincostclimbingstairs

func minCostClimbingStairs(cost []int) int {
	arr := make([]int, 2)

	dpFunc := func(i int) {
		opt1 := arr[0] + cost[i-2]
		opt2 := arr[1] + cost[i-1]
		v := min(opt1, opt2)
		arr[0] = arr[1]
		arr[1] = v
	}

	arr[0] = 0
	arr[1] = 0

	for i := 2; i <= len(cost); i++ {
		dpFunc(i)
	}

	return arr[1]
}
