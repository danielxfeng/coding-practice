package gasstation

func canCompleteCircuit(gas []int, cost []int) int {
	if len(gas) == 0 {
		return 0
	}

	total := 0
	res := 0
	curr := 0

	for i := range gas {
		v := gas[i] - cost[i]
		total += v
		curr += v
		if curr < 0 {
			res = i + 1
			curr = 0
		}
	}

	if total < 0 {
		return -1
	}

	return res
}
