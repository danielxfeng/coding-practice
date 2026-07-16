import { test, expect } from "vitest"
import canConstruct from "./canconstruct.js"

interface testcase {
    ransomNote: string,
    magazine: string,
    want: boolean
}

test("canconstruct", () => {
    const tcs: testcase[] = [
        { ransomNote: "a", magazine: "b", want: false },
        { ransomNote: "aa", magazine: "ab", want: false },
        { ransomNote: "aa", magazine: "aab", want: false },
    ]

    for (const tc of tcs) {
        expect(canConstruct(tc.ransomNote, tc.magazine) === tc.want)
    }
})
