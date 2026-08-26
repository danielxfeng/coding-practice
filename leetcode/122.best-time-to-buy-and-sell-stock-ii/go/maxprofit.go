package besttimetobuyandsellstockii

func maxProfit(prices []int) int {
	if len(prices) < 2 {
		return 0
	}

	res := 0

	for i := 1; i < len(prices); i++ {
		profit := prices[i] - prices[i-1]

		if profit > 0 {
			res += profit
		}
	}

	return res
}
