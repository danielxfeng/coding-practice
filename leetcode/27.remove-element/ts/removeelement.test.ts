import { expect, test } from "vitest";
import removeElement from "./removeelement.js";

interface testCase {
    nums: number[],
    val: number,
    want: number,
    wantNums: number[]
}

test("removeelement", () => {
    const tcs: testCase[] = [
        { nums: [3, 2, 2, 3], val: 3, want: 2, wantNums: [2, 2] },
        { nums: [0, 1, 2, 2, 3, 0, 4, 2], val: 2, want: 5, wantNums: [0, 1, 3, 0, 4] },
        { nums: [], val: 2, want: 0, wantNums: [] },
        { nums: [0, 0, 0], val: 0, want: 0, wantNums: [] }
    ]

    for (const tc of tcs) {
        const got = removeElement(tc.nums, tc.val)
        expect(got).toEqual(tc.want)
        expect(tc.nums.slice(0, got)).toEqual(tc.wantNums)
    }
})
