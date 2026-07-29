import { test, expect } from "vitest"
import maxSlidingWindow from "./maxslidingwindow.js"

interface testcase {
    nums: number[]
    k: number
    want: number[]
}

test("maxslidingwindow", () => {
    const testcase: testcase[] = [
        { nums: [1, 3, -1, -3, 5, 3, 6, 7], k: 3, want: [3, 3, 5, 5, 6, 7] }
    ]

    testcase.forEach(tc => expect(maxSlidingWindow(tc.nums, tc.k) === tc.want))
})
