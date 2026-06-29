import { expect, test } from "vitest";
import twoSum from "./twosum.js";

interface testCase {
    nums: number[],
    target: number,
    want: number[],
}

test("twosum", () => {
    const tcs: testCase[] = [
        { nums: [2, 7, 11, 15], target: 9, want: [0, 1] },
        { nums: [3, 2, 4], target: 6, want: [1, 2] },
        { nums: [3, 3], target: 6, want: [0, 1] },
        { nums: [], target: 0, want: [] },
        { nums: [0, 4, 3, 0], target: 0, want: [0, 3] },
    ]

    for (const tc of tcs)
        expect(twoSum(tc.nums, tc.target)).toEqual(tc.want)
});
