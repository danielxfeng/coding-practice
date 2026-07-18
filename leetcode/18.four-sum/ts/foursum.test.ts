import { test, expect } from "vitest"
import fourSum from "./foursum.js"

interface testcase {
    nums: number[]
    target: number
    want: number[][]
}

test("foursum", () => {
    const tcs: testcase[] = [
        { nums: [1, 0, -1, 0, -2, 2], target: 0, want: [[-2, -1, 1, 2], [-2, 0, 0, 2], [-1, 0, 0, 1]] },
        { nums: [2, 2, 2, 2, 2], target: 8, want: [[2, 2, 2, 2]] },
    ]

    tcs.forEach(tc => expect(fourSum(tc.nums, tc.target) === tc.want))
})
