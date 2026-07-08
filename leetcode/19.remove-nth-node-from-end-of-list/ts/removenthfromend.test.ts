import { test, expect } from "vitest"
import removeNthFromEnd, { ListNode } from "./removenthfromend.js"

interface testcase {
    head: ListNode | null,
    n: number,
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

test("removenthfromend", () => {
    const tcs: testcase[] = [
        { head: buildList(1, 2, 3, 4, 5), n: 2, want: buildList(1, 2, 3, 5) },
        { head: buildList(1), n: 1, want: buildList() },
        { head: buildList(1, 2), n: 1, want: buildList(1) },
    ]

    for (const tc of tcs) {
        const got = removeNthFromEnd(tc.head, tc.n)
        expect(got).toEqual(tc.want)
    }
})
