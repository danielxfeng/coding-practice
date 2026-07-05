export class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}

export class MyLinkedList {
    head: ListNode
    size: number

    constructor() {
        this.head = new ListNode()
        this.size = 0
    }

    get(index: number): number {
        if (index < 0 || index >= this.size) return -1

        let curr = this.head.next

        for (let i = 0; i < index; i++)
            curr = curr!.next

        return curr!.val
    }

    addAtHead(val: number): void {
        this.head.next = new ListNode(val, this.head.next)
        this.size++
    }

    addAtTail(val: number): void {
        let curr = this.head
        while (curr.next !== null)
            curr = curr.next

        curr.next = new ListNode(val)
        this.size++
    }

    addAtIndex(index: number, val: number): void {
        if (index > this.size) return
        if (index < 0) index = 0

        let curr: ListNode | null = this.head
        for (let i = 0; i < index; i++)
            curr = curr!.next

        curr!.next = new ListNode(val, curr?.next)
        this.size++
    }

    deleteAtIndex(index: number): void {
        if (index < 0 || index >= this.size) return

        let curr: ListNode | null = this.head
        for (let i = 0; i < index; i++)
            curr = curr!.next

        curr!.next = curr!.next!.next
        this.size--
    }
}
