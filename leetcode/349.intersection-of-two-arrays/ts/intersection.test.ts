import { test, expect } from "vitest"
import intersection from "./intersection.js"

interface testcase {
    nums1: number[]
    nums2: number[]
    want: number[]
}

test("intersection", () => {
    const tcs: testcase[] = [
        { nums1: [1, 2, 2, 1], nums2: [2, 2], want: [2] },
        { nums1: [4, 9, 5], nums2: [9, 4, 9, 8, 4], want: [9, 4] },
    ]

    for (const tc of tcs) {
        const got = intersection(tc.nums1, tc.nums2)
        expect(got === tc.want)
    }
})
