import { test, expect } from "vitest"
import removeElements, { ListNode } from "./removeelements.js"

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
    head: ListNode | null,
    val: number,
    want: ListNode | null,
}

test("removelelments", () => {
    const tcs: testcase[] = [
        { head: buildList(1, 2, 6, 3, 4, 5, 6), val: 6, want: buildList(1, 2, 3, 4, 5) },
        { head: buildList(), val: 1, want: buildList() },
        { head: buildList(7, 7, 7, 7), val: 7, want: buildList() },
    ]

    for (const tc of tcs) {
        expect(equalLists(removeElements(tc.head, tc.val), tc.want))
    }
})
