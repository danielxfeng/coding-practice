import { test, expect } from "vitest"
import topKFrequent from "./topk.js"

interface testcase {
    nums: number[]
    k: number
    want: number[]
}

test("topk", () => {
    const tcs: testcase[] = [
        { nums: [1, 1, 1, 2, 2, 3], k: 2, want: [1, 2] },
        { nums: [1], k: 1, want: [] },
        { nums: [1, 2, 1, 2, 1, 2, 3, 1, 3, 2], k: 2, want: [1, 2] },
    ]

    tcs.forEach(tc => expect(topKFrequent(tc.nums, tc.k) === tc.want))
})
