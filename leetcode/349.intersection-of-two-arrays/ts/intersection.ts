const intersection = (nums1: number[], nums2: number[]): number[] => {
    const s = new Set<number>()

    for (const n of nums1) {
        s.add(n)
    }

    const s2 = new Set<number>()

    for (const n of nums2) {
        if (s.has(n)) s2.add(n)
    }

    return Array.from(s2)
};

export default intersection
