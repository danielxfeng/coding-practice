const lemonadeChange = (bills: number[]): boolean => {
    let tens = 0
    let fives = 0

    for (let v of bills) {
        switch (v) {
            case 5:
                fives++
                break
            case 10:
                tens++
                fives--
                break
            case 20:
                if (tens > 0) {
                    tens--
                    fives--
                } else {
                    fives -= 3
                }
                break
            default:
                break
        }

        if (tens < 0 || fives < 0) return false
    }

    return true
}
