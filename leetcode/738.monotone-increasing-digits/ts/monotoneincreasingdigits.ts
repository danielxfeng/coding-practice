const monotoneIncreasingDigits = (n: number): number => {
    const arr: string[] = n.toString().split("")
    let marker = arr.length

    for (let i = arr.length - 1; i > 0; i--) {
        if (arr[i - 1] > arr[i]) {
            arr[i - 1] = String.fromCharCode(arr[i - 1].charCodeAt(0) - 1)
            marker = i
        }
    }

    for (let i = marker; i < arr.length; i++) {
        arr[i] = "9"
    }

    return Number(arr.join(""))
}
