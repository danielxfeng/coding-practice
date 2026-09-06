package fib

func fib(n int) int {
	return dpOptimizedFib(n)
}

func dpFib(n int) int {
	if n < 2 {
		return n
	}

	arr := make([]int, n+1)

	dpFunc := func(i int) {
		arr[i] = arr[i-1] + arr[i-2]
	}

	arr[0] = 0
	arr[1] = 1

	for i := 2; i <= n; i++ {
		dpFunc(i)
	}

	return arr[n]
}

func dpOptimizedFib(n int) int {
	if n < 2 {
		return n
	}

	arr := make([]int, 2)

	dpFunc := func() {
		v := arr[0] + arr[1]
		arr[0] = arr[1]
		arr[1] = v
	}

	arr[1] = 1

	for i := 2; i <= n; i++ {
		dpFunc()
	}

	return arr[1]
}

func recurFib(n int) int {
	if n < 2 {
		return n
	}

	return recurFib(n-1) + recurFib(n-2)
}

func recurOptimizedFib(n int) int {
	if n < 2 {
		return n
	}

	arr := make([]int, n+1)
	arr[1] = 1

	var recur func(int) int

	recur = func(n int) int {
		if n < 2 {
			return n
		}

		if arr[n] != 0 {
			return arr[n]
		}

		arr[n] = recur(n-1) + recur(n-2)
		return arr[n]
	}

	return recur(n)
}
