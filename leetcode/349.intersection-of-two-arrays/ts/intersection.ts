const intersection = (nums1: number[], nums2: number[]): number[] => {
    const firstNumbers = new Set<number>()

    for (const n of nums1) {
        firstNumbers.add(n)
    }

    const sharedNumbers = new Set<number>()

    for (const n of nums2) {
        if (firstNumbers.has(n)) sharedNumbers.add(n)
    }

    return Array.from(sharedNumbers)
};

export default intersection
