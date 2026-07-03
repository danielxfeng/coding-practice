import { expect, test } from "vitest";
import generateMatrix from "./generatematrix.js";

interface testcase {
    n: number
    want: number[][]
}

test("generatematrix", () => {
    const tcs: testcase[] = [
        { n: 3, want: [[1, 2, 3], [8, 9, 4], [7, 6, 5]] },
        { n: 1, want: [[1]] },
    ]

    for (const tc of tcs) {
        expect(generateMatrix(tc.n)).toEqual(tc.want)
    }
})
