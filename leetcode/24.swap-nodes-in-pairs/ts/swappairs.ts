export class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}

// N, 1
const swapPairs = (head: ListNode | null): ListNode | null => {
    const dummy = new ListNode(0, head)

    let prev = dummy
    let curr = head

    while (curr !== null && curr.next !== null) {
        const next = curr.next
        const nNext = next.next

        prev.next = next
        curr.next = nNext
        next.next = curr

        prev = curr
        curr = nNext
    }

    return dummy.next
};

export default swapPairs
