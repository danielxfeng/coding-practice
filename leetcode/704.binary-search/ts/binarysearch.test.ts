import { expect, test } from "vitest";
import search from "./binarysearch.js";

interface testCase {
    nums: number[],
    target: number,
    want: number,
}

test("binarysearch", () => {
    const testcases: testCase[] = [
        { nums: [-1, 0, 3, 5, 9, 12], target: 9, want: 4 },
        { nums: [-1, 0, 3, 5, 9, 12], target: 2, want: -1 },
        { nums: [], target: 0, want: -1 },
        { nums: [1], target: 1, want: 0 },
        { nums: [2, 3], target: 3, want: 1 },
    ]

    for (const tc of testcases) {
        expect(search(tc.nums, tc.target)).toEqual(tc.want)
    }
})
