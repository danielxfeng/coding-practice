class MyQueue {
    private in: number[]
    private out: number[]

    constructor() {
        this.in = [];
        this.out = [];
    }

    push(x: number): void {
        this.in.push(x)
    }

    pop(): number {
        if (this.out.length === 0) {
            while (this.in.length > 0) {
                const v = this.in.pop()
                this.out.push(v!)
            }
        }

        return this.out.pop()!
    }

    peek(): number {
        if (this.out.length === 0) {
            while (this.in.length > 0) {
                const v = this.in.pop()
                this.out.push(v!)
            }
        }

        const v = this.out.pop()!
        this.out.push(v)

        return v
    }

    empty(): boolean {
        return this.in.length === 0 && this.out.length === 0
    }
}
