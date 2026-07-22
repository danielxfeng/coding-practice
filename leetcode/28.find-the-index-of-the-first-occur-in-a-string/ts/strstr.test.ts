import { test, expect } from "vitest"
import strStr from "./strstr.js"

interface testcase {
    haystack: string
    needle: string
    want: number
}

test("strstr", () => {
    const tcs: testcase[] = [
        { haystack: "sadbutsad", needle: "sad", want: 0 },
        { haystack: "leetcode", needle: "leeto", want: -1 },
    ]

    tcs.forEach(tc => expect(strStr(tc.haystack, tc.needle) === tc.want))
})
