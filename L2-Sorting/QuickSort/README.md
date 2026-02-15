# Quick Sort

## Overview

Quick Sort is a **divide-and-conquer** sorting algorithm.

It works by selecting a **pivot element**, partitioning the array around the pivot, and recursively applying the same process to the left and right subarrays.

Average Time Complexity: **O(n log n)**
Worst Case Time Complexity: **O(n²)**
Space Complexity: **O(log n)** (due to recursion stack)

---

## How It Works

1. Choose a **pivot** element from the array.
2. **Partition** the array so that:

   * All elements smaller than the pivot are placed on the left.
   * All elements greater than the pivot are placed on the right.
3. Place the pivot in its **correct sorted position**.
4. Recursively apply Quick Sort to:

   * The left subarray
   * The right subarray

After each partition step, **at least one element (the pivot) is in its final sorted position**.

---

## Partition Schemes

Quick Sort can be implemented using different partition schemes:

### 1. Lomuto Partition Scheme (Used in these programs)

* Pivot is typically chosen as the last element.
* Uses a single pointer to track elements smaller than the pivot.
* Easier to understand and implement.
* Performs more swaps compared to Hoare’s scheme.

### 2. Hoare Partition Scheme

* Pivot is typically chosen as the first element.
* Uses two pointers moving inward from both ends.
* Fewer swaps and often faster in practice.
* Slightly more complex to implement.

### 3. Three-Way Partitioning

* Efficient when the array contains many duplicate values.
* Divides the array into:

  * Elements less than pivot
  * Elements equal to pivot
  * Elements greater than pivot

---

## Notes

* Performance depends heavily on pivot selection.
* Choosing a poor pivot (e.g., smallest or largest element repeatedly) leads to worst-case O(n²).
