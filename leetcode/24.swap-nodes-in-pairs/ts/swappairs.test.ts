import { test, expect } from "vitest"

import swappairs, { ListNode } from "./swappairs.js"

interface testcase {
    head: ListNode | null,
    want: ListNode | null
}

const buildList = (...vals: number[]): ListNode | null => {
    const dummy = new ListNode()
    let curr = dummy

    for (const v of vals) {
        curr.next = new ListNode(v)
        curr = curr.next
    }

    return dummy.next
}

const equalLists = (l1: ListNode | null, l2: ListNode | null): boolean => {
    if (l1 === null && l2 === null) return true
    if (l1 === null || l2 === null) return false
    if (l1.val !== l2.val) return false

    return equalLists(l1.next, l2.next)
}

test("swappairs", () => {
    const tcs: testcase[] = [
        { head: buildList(1, 2, 3, 4), want: buildList(2, 1, 4, 3) },
        { head: buildList(), want: buildList() },
        { head: buildList(1), want: buildList(1) },
        { head: buildList(1, 2, 3), want: buildList(2, 1, 3) },
    ]

    for (const tc of tcs) {
        const got = swappairs(tc.head)
        expect(got).toEqual(tc.want)
    }
})
