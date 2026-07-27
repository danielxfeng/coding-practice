import { test, expect } from "vitest"
import removeDuplicates from "./removeduplicates.js"

interface testcase {
    s: string
    want: string
}

test("removeduplicates", () => {
    const tcs: testcase[] = [
        { s: "abbaca", want: "ca" },
        { s: "azxxzy", want: "ay" }
    ]

    tcs.forEach(tc => expect(removeDuplicates(tc.s) === tc.want))
})
