import { expect, test } from "vitest";
import minSubArrayLen from "./minsubarraylen.js";

interface testcase {
    nums: number[]
    target: number
    want: number
}

test("minsubarraylen", () => {
    const tcs: testcase[] = [
        { nums: [2, 3, 1, 2, 4, 3], target: 7, want: 2 },
        { nums: [1, 4, 4], target: 4, want: 1 },
        { nums: [1, 1, 1, 1, 1, 1, 1, 1], target: 11, want: 0 },
        { nums: [], target: 0, want: 0 },
    ]

    for (const tc of tcs) {
        expect(minSubArrayLen(tc.target, tc.nums)).toEqual(tc.want)
    }
})
