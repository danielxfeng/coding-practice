import { test, expect } from "vitest"
import threeSum from "./threesum.js"

interface testcase {
    nums: number[]
    want: number[][]
}

test("threesum", () => {
    const tcs: testcase[] = [
        { nums: [-1, 0, 1, 2, -1, -4], want: [[-1, -1, 2], [-1, 0, 1]] },
        { nums: [0, 1, 1], want: [] },
        { nums: [0, 0, 0], want: [[0, 0, 0]] },
    ]

    for (const tc of tcs) {
        expect(threeSum(tc.nums) === tc.want)
    }
})
