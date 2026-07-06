import { test, expect } from "vitest"

import reverselist, { ListNode } from "./reverselist.js"

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

interface testcase {
    head: ListNode | null
    want: ListNode | null
}

test("reverselist", () => {
    const tcs: testcase[] = [
        { head: buildList(1, 2, 3, 4, 5), want: buildList(5, 4, 3, 2, 1) },
        { head: buildList(1, 2), want: buildList() },
        { head: buildList(), want: buildList(2, 1) },
    ]

    for (const tc of tcs) {
        expect(equalLists(tc.want, reverselist(tc.head)))
    }
})
