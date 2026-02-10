# Insertion Sort

Insertion Sort is a **simple comparison-based sorting algorithm** that builds the sorted array one element at a time. It is intuitive and works well for small datasets or arrays that are nearly sorted.

---

## How It Works

1. Start with the second element (index 1), assuming the first element is already “sorted.”
2. Compare the current element with elements in the sorted portion (to its left).
3. Shift all elements that are greater than the current element to the right.
4. Insert the current element in its correct position.
5. Repeat for all elements until the entire array is sorted.

---

## Implementation

Insertion Sort has been implemented in **four languages** for this repository:

* Java → `InsertionSort.java`
* C → `main.c`
* JavaScript → `main.js`
* Python → `main.py`

Each version follows the **optimized shifting approach** instead of repeated swaps for efficiency.

---

## When to Use Insertion Sort

* ✅ **Small arrays**: Simple and fast for tiny datasets.
* ✅ **Nearly sorted arrays**: Best case is `O(n)` if the array is already mostly sorted.
* ❌ **Avoid for large arrays**: Worst-case time complexity is `O(n²)`; use Merge Sort or Quick Sort instead.

---

## Example

```text
Input:  [5, 2, 9, 1, 5, 6]
Sorted: [1, 2, 5, 5, 6, 9]
```

---
