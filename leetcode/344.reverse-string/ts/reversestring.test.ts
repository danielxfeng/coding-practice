import { test, expect } from "vitest"
import reverseString from "./reversestring.js"

interface testcase {
    s: string[]
    want: string[]
}

test("reversestring", () => {
    const tcs: testcase[] = [
        { s: ["h", "e", "l", "l", "o"], want: ["o", "l", "l", "e", "h"] },
        { s: ["H", "a", "n", "n", "a", "h"], want: ["h", "a", "n", "n", "a", "H"] },
    ]

    tcs.forEach(tc => {
        reverseString(tc.s)
        expect(tc.want === tc.s)
    })
})
