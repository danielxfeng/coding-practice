export class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}

const detectCycle = (head: ListNode | null): ListNode | null => {
    let fast: ListNode | null = head
    let slow: ListNode | null = head

    while (fast !== null && fast.next !== null) {
        fast = fast.next.next
        slow = slow!.next

        if (fast === slow) {
            let first: ListNode | null = head
            let second: ListNode | null = fast

            while (first !== second) {
                first = first!.next
                second = second!.next
            }

            return first
        }
    }

    return null
};
