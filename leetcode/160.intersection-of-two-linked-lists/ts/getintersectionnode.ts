
class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}

const getIntersectionNode = (headA: ListNode | null, headB: ListNode | null): ListNode | null => {
    const nodesFromFirstList = new Set<ListNode | null>()

    while (headA !== null) {
        nodesFromFirstList.add(headA)
        headA = headA.next
    }

    while (headB !== null) {
        if (nodesFromFirstList.has(headB)) return headB
        headB = headB.next
    }

    return null
};
