const pushQueue = (queue: number[], v: number) => {
    while (queue.length > 0 && queue[queue.length - 1] < v)
        queue.pop()

    queue.push(v)
}

const popQueue = (queue: number[], v: number) => {
    if (queue.length > 0 && queue[0] === v)
        queue.shift()
}

const topQueue = (queue: number[]): number | null => {
    return queue.length > 0 ? queue[0] : null
}

const maxSlidingWindow = (nums: number[], k: number): number[] => {
    if (k > nums.length || k <= 0 || nums.length === 0) return []

    const queue: number[] = []
    const res: number[] = []

    for (let i = 0; i < k; i++)
        pushQueue(queue, nums[i])

    res.push(topQueue(queue)!)

    for (let l = k; l < nums.length; l++) {
        popQueue(queue, nums[l - k])
        pushQueue(queue, nums[l])

        res.push(topQueue(queue)!)
    }

    return res
}

export default maxSlidingWindow
