const topKFrequent = (nums: number[], k: number): number[] => {
    const frequencyByNumber = new Map<number, number>()

    for (const n of nums) frequencyByNumber.set(n, (frequencyByNumber.get(n) ?? 0) + 1)

    const frequencyEntries: { k: number, c: number }[] = Array()

    for (const [k, c] of frequencyByNumber)
        frequencyEntries.push({ k: k, c: c })

    frequencyEntries.sort((a, b) => b.c - a.c)

    return frequencyEntries.slice(0, k).map(entry => entry.k)
};

export default topKFrequent
