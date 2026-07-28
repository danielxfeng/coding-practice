import { test, expect } from "vitest"
import evalRPN from "./evalrpn.js"

interface testcase {
    tokens: string[]
    want: number
}

test("evalrpn", () => {
    const tcs: testcase[] = [
        { tokens: ["2", "1", "+", "3", "*"], want: 9 },
        { tokens: ["4", "13", "5", "/", "+"], want: 6 },
        { tokens: ["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"], want: 22 },
    ]

    tcs.forEach(tc => expect(evalRPN(tc.tokens) === tc.want))
})
