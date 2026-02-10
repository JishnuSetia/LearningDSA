# SELECTION SORT

Selection Sort is a simple comparison-based sorting algorithm.
It works by repeatedly finding the minimum element from the unsorted portion of the array and moving it to the beginning.

## How it works

1. Start at the first element (index 0).
2. Find the smallest element in the remaining unsorted portion.
3. Swap it with the element at the current index.
4. Move to the next index and repeat until the array is sorted.

* Time Complexity: `O(n²)` in all cases (best, average, worst)

---

## The Code

Selection Sort has been implemented in 4 languages:

* **Java**: `SelectionSort.java`
* **C**: `main.c`
* **JavaScript**: `main.js`
* **Python**: `main.py`

---

## Example

```text
Input:  [64, 25, 12, 22, 11]
Output: [11, 12, 22, 25, 64]
```

---

## When to Use Selection Sort

Selection Sort is **not the most efficient algorithm for large datasets**, but it has some specific scenarios where it can be useful:

* ✅ **Small arrays**
  Sorting tiny arrays (e.g., < 20 elements) where `O(n²)` time is not an issue.

* ✅ **Minimizing writes**
  Selection sort performs **at most n-1 swaps**, so it’s ideal when writing to memory is costly (e.g., flash memory, EEPROM).

* ✅ **Simple teaching and learning**
  Great for understanding basic sorting concepts, comparison-based sorting, and algorithm design.

* ❌ **Avoid for large arrays**
  Time complexity `O(n²)` makes it unsuitable for large datasets compared to Merge Sort, Quick Sort, or built-in library sorts.

**Rule of thumb:** Use Selection Sort when array is small or memory writes are expensive, otherwise prefer faster algorithms.

---
