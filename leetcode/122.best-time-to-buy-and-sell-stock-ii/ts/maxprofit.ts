const maxProfit = (prices: number[]): number => {
    if (prices.length === 0) return 0
    
    let res = 0

    for (let i = 1; i < prices.length; i++) {
        const profit = prices[i] - prices[i - 1]

        if (profit > 0) res += profit
    }

    return res
}
