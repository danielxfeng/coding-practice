package candy

func candy(ratings []int) int {
	candyArr := make([]int, len(ratings))
	
	for i := range candyArr {
		candyArr[i] = 1
	}

	for i := 1; i < len(ratings); i++ {
		if ratings[i] > ratings[i-1] {
			candyArr[i] = candyArr[i-1] + 1
		}
	}

	for i := len(ratings) - 2; i >= 0; i-- {
		if ratings[i] > ratings[i+1] && candyArr[i+1]+1 > candyArr[i] {
			candyArr[i] = candyArr[i+1] + 1
		}
	}

	res := 0

	for _, v := range candyArr {
		res += v
	}

	return res
}
