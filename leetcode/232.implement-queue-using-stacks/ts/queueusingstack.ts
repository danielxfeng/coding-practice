class MyQueue {
    private incomingStack: number[]
    private outgoingStack: number[]

    constructor() {
        this.incomingStack = [];
        this.outgoingStack = [];
    }

    push(x: number): void {
        this.incomingStack.push(x)
    }

    pop(): number {
        if (this.outgoingStack.length === 0) {
            while (this.incomingStack.length > 0) {
                const v = this.incomingStack.pop()
                this.outgoingStack.push(v!)
            }
        }

        return this.outgoingStack.pop()!
    }

    peek(): number {
        if (this.outgoingStack.length === 0) {
            while (this.incomingStack.length > 0) {
                const v = this.incomingStack.pop()
                this.outgoingStack.push(v!)
            }
        }

        const v = this.outgoingStack.pop()!
        this.outgoingStack.push(v)

        return v
    }

    empty(): boolean {
        return this.incomingStack.length === 0 && this.outgoingStack.length === 0
    }
}
