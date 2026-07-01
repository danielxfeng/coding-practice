import { expect, test } from "vitest";
import sortedSquares from "./sortedsquares.js";

interface testcase {
    nums: number[]
    want: number[]
}

test("sortedsquare", () => {
    const tcs: testcase[] = [
        { nums: [- 4, -1, 0, 3, 10], want: [0, 1, 9, 16, 100] },
        { nums: [- 7, -3, 2, 3, 11], want: [4, 9, 9, 49, 121] },
        { nums: [- 3], want: [9] },
        { nums: [], want: [] },
    ]

    for (const tc of tcs) {
        expect(sortedSquares(tc.nums)).toEqual(tc.want)
    }
})
