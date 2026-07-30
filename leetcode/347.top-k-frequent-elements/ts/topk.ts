const topKFrequent = (nums: number[], k: number): number[] => {
    const map = new Map<number, number>()

    for (const n of nums) map.set(n, (map.get(n) ?? 0) + 1)

    const items: { k: number, c: number }[] = Array()

    for (const [k, c] of map)
        items.push({ k: k, c: c })

    items.sort((a, b) => b.c - a.c)

    return items.slice(0, k).map(item => item.k)
};

export default topKFrequent
