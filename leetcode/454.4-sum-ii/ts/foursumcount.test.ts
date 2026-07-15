import { test, expect } from "vitest"
import fourSumCount from "./foursumcount.js"

interface testcase {
    nums1: number[]
    nums2: number[]
    nums3: number[]
    nums4: number[]
    want: number
}

test("foursumcounts", () => {
    const tcs: testcase[] = [
        { nums1: [1, 2], nums2: [-2, -1], nums3: [-1, 2], nums4: [0, 2], want: 2 },
        { nums1: [0], nums2: [0], nums3: [0], nums4: [0], want: 1 },
    ]

    for (const tc of tcs) {
        expect(fourSumCount(tc.nums1, tc.nums2, tc.nums3, tc.nums4) === tc.want)
    }
})
