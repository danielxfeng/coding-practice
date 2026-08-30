package lemonadechange

func lemonadeChange(bills []int) bool {
	tens := 0
	fives := 0

	for _, v := range bills {
		switch v {
		case 5:
			fives++
		case 10:
			{
				tens++
				fives--
			}
		case 20:
			{
				if tens > 0 {
					tens--
					fives--
				} else {
					fives -= 3
				}
			}
		}

		if tens < 0 || fives < 0 {
			return false
		}
	}

	return true
}
