// N2, N2
const fourSumCount = (nums1: number[], nums2: number[], nums3: number[], nums4: number[]): number => {
    const s = new Map<number, number>()
    let res = 0

    for (const n1 of nums1) {
        for (const n2 of nums2) {
            const sum = n1 + n2
            s.set(sum, (s.get(sum) ?? 0) + 1)
        }
    }

    for (const n3 of nums3) {
        for (const n4 of nums4) {
            const sum = -n3 - n4
            if (s.has(sum))
                res += s.get(sum)!
        }
    }

    return res
};

export default fourSumCount
