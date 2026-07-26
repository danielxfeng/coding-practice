import { test, expect } from "vitest"
import isValid from "./isvalid.js"

interface testcase {
    s: string
    want: boolean
}

test("isvalid", () => {
    const tcs: testcase[] = [
        { s: "()", want: true },
        { s: "()[]{}", want: true },
        { s: "(]", want: false },
        { s: "([])", want: true },
        { s: "([)]", want: false },
    ]

    tcs.forEach(tc => isValid(tc.s) === tc.want)
})
