const candy = (ratings: number[]): number => {
    const candyArr: number[] = Array(ratings.length).fill(1)

    for (let i = 1; i < ratings.length; i++)
        if (ratings[i] > ratings[i - 1]) candyArr[i] = candyArr[i - 1] + 1

    for (let i = ratings.length - 2; i >= 0; i--)
        if (ratings[i] > ratings[i + 1] && candyArr[i + 1] + 1 > candyArr[i]) candyArr[i] = candyArr[i + 1] + 1

    return candyArr.reduce((acc, v) => acc + v, 0)
}
