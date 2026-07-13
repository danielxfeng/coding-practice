import { expect, test } from "vitest"
import isHappy from "./happynumber.js"

interface testcase {
    n: number
    want: boolean
}

test("happynumber", () => {
    const tcs: testcase[] = [
        { n: 19, want: true },
        { n: 2, want: false }
    ]

    for (const tc of tcs) {
        expect(tc.want === isHappy(tc.n))
    }
})
