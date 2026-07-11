import { test, expect } from 'vitest'
import commonChars from './commonchars.js'

interface testcase {
    words: string[]
    want: string[]
}

test('commonchars', () => {
    const tcs: testcase[] = [
        { words: ["bella", "label", "roller"], want: ["e", "l", "l"] },
        { words: ["cool", "lock", "cook"], want: ["c", "o"] },
    ]

    for (const tc of tcs) {
        expect(tc.want === commonChars(tc.words))
    }
})
