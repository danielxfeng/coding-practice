import { test, expect } from "vitest"
import isAnagram from "./isanagram.js"

interface testcase {
    t: string
    s: string
    want: boolean
}

test("isanagram", () => {
    const tcs: testcase[] = [
        { t: "anagram", s: "nagaram", want: true },
        { t: "rat", s: "cat", want: false },
        { t: "ra", s: "ard", want: false },
    ]

    for (const tc of tcs) {
        const got = isAnagram(tc.s, tc.t)
        expect(tc.want).toEqual(got)
    }
})
