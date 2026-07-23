import { test, expect } from "vitest"
import repeatedSubstringPattern from "./repeatedsubstringpattern.js"

interface testcase {
    s: string
    want: boolean
}

test("repeatedsubstringpattern", () => {
    const tcs: testcase[] = [
        { s: "abab", want: true },
        { s: "aba", want: false },
        { s: "abcabcabcabc", want: true },
    ]

    tcs.forEach(tc => expect(repeatedSubstringPattern(tc.s) === tc.want))
})
