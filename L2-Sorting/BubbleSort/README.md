# Bubble Sort

## Overview

Bubble Sort is a simple comparison-based sorting algorithm.
It works by repeatedly stepping through the array, comparing adjacent elements, and swapping them if they are in the wrong order.

With each pass, the largest unsorted element “bubbles up” to its correct position at the end of the array.

---

## How It Works

1. Start from the beginning of the array.
2. Compare adjacent elements.
3. Swap them if the left element is greater than the right.
4. After each full pass, the largest element is placed at the end.
5. Repeat for the remaining unsorted portion of the array.

An optimization is used to stop early if no swaps occur in a pass, meaning the array is already sorted.

---

## Implementations

Bubble Sort is implemented in the following languages:

* **C**
* **Java**
* **Python**
* **JavaScript**

All implementations:

* Sort the array **in-place**
* Use an **early-exit optimization**
* Follow the same algorithmic logic across languages

---

## Time Complexity

* **Best Case:** O(n)
  (Array is already sorted, early exit triggers)
* **Average Case:** O(n²)
* **Worst Case:** O(n²)

---

## When to Use Bubble Sort

Bubble Sort is mainly used for:

* Learning and understanding sorting algorithms
* Small datasets
* Demonstrating algorithm optimizations (like early exit)

It is **not recommended** for large datasets due to poor performance compared to more efficient sorting algorithms.

---
