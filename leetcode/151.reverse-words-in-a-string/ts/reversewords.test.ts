import { test, expect } from "vitest"
import reverseWords from "./reversewords.js"

interface testcase {
    s: string
    want: string
}

test("reversewords", () => {
    const tcs: testcase[] = [
        { s: "the sky is blue", want: "blue is sky the" },
        { s: "  hello world  ", want: "world hello" },
        { s: "a good   example", want: "example good a" },
    ]

    tcs.forEach(tc => expect(reverseWords(tc.s) === tc.want))
})
