package climbstairs

func climbStairs(n int) int {
	return dpOptimized(n)
}

func recur(n int) int {
	if n < 3 {
		return n
	}

	return recur(n-1) + recur(n-2)
}

func dp(n int) int {
	if n < 3 {
		return n
	}

	arr := make([]int, n+1)

	dpFunc := func(n int) {
		arr[n] = arr[n-1] + arr[n-2]
	}

	arr[1] = 1
	arr[2] = 2

	for i := 3; i <= n; i++ {
		dpFunc(i)
	}

	return arr[n]
}

func dpOptimized(n int) int {
	if n < 3 {
		return n
	}

	arr := make([]int, 2)

	dpFunc := func() {
		v := arr[0] + arr[1]
		arr[0] = arr[1]
		arr[1] = v
	}

	arr[0] = 1
	arr[1] = 2

	for i := 3; i <= n; i++ {
		dpFunc()
	}

	return arr[1]
}
