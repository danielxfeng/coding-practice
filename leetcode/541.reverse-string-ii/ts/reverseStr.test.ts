import { test, expect } from "vitest"
import reverseStr from "./reversestr.js"

interface testcase {
    s: string
    k: number
    want: string
}

test("reversestr", () => {
    const tcs: testcase[] = [
        { s: "abcd", k: 2, want: "bacd" },
        { s: "abcdefg", k: 2, want: "bacdfeg" },
    ]

    tcs.forEach(tc => expect(reverseStr(tc.s, tc.k) === tc.want))
})
