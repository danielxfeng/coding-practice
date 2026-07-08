export class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}

// N, 1
const removeNthFromEnd = (head: ListNode | null, n: number): ListNode | null => {
    const dummy: ListNode | null = new ListNode(0, head);

    let curr = head
    let prevSlow: ListNode | null = dummy

    let i = 0
    while (curr != null) {
        if (i++ >= n) prevSlow = prevSlow!.next
        curr = curr.next
    }

    prevSlow!.next = prevSlow!.next!.next

    return dummy.next
};

export default removeNthFromEnd
