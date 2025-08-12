# Data Structures and Algorithms Lab

This repository contains implementations of various data structures and algorithms in C++ as part of a lab curriculum. Each experiment focuses on a specific algorithm or data structure, including its implementation and time complexity analysis.

---

## 📋 List of Experiments

1.  **Sorting Algorithms**
    * [Insertion Sort](#1a-insertion-sort)
    * [Selection Sort](#1b-selection-sort)
    * [Bubble Sort](#1c-bubble-sort)
    * [Quick Sort](#1d-quick-sort)
    * [Merge Sort](#1e-merge-sort)
    * [Heap Sort](#1f-heap-sort)
2.  **Searching Algorithms**
    * [Linear Search](#2a-linear-search)
    * [Binary Search](#2b-binary-search)
3.  **Matrix Multiplication**
    * [Strassen's Matrix Multiplication](#3-strassens-matrix-multiplication)
4.  **Combinatorics**
    * [Binomial Coefficient Computation](#4-binomial-coefficient-computation)
5.  **Graph Algorithms (Minimum Spanning Tree)**
    * [Prim's Algorithm](#5-prims-algorithm)
6.  **Graph Algorithms (Shortest Path)**
    * [Dijkstra's Algorithm](#6-dijkstras-algorithm)
    * [Bellman-Ford Algorithm](#7-bellman-ford-algorithm)
7.  **Graph Traversal**
    * [Depth First Search (DFS) and Breadth First Search (BFS)](#8-dfs-and-bfs)
8.  **Specialized Sorting**
    * [Bucket Sort](#9-bucket-sort)
    * [Topological Sort](#10-topological-sort)
9.  **Approximation Algorithms**
    * [Approximate Vertex Cover](#11-approximate-vertex-cover)
10. **Heuristics**
    * [City Distances Simulation](#12-city-distances-simulation)
11. **Probability and Analysis**
    * [Integer Implementation and Error Probability](#13-integer-implementation-and-error-probability)
12. **Performance Analysis**
    * [Large Dataset Sorting and Visualization](#14-large-dataset-sorting-and-visualization)
    * [Large Matrix Multiplication Speedup](#15-large-matrix-multiplication-speedup)

---

## 1. Sorting Algorithms

Implementation of various sorting algorithms using an array as the data structure, along with an analysis of their time complexity.

### 1a. Insertion Sort
* **Implementation:** `path/to/insertion_sort.cpp`
* **Time Complexity:**
    * Best Case: O(n)
    * Average Case: O(n^2)
    * Worst Case: O(n^2)

### 1b. Selection Sort
* **Implementation:** `path/to/selection_sort.cpp`
* **Time Complexity:** O(n^2) for all cases.

### 1c. Bubble Sort
* **Implementation:** `path/to/bubble_sort.cpp`
* **Time Complexity:**
    * Best Case: O(n)
    * Average Case: O(n^2)
    * Worst Case: O(n^2)

### 1d. Quick Sort
* **Implementation:** `path/to/quick_sort.cpp`
* **Time Complexity:**
    * Best Case: O(n log n)
    * Average Case: O(n log n)
    * Worst Case: O(n^2)

### 1e. Merge Sort
* **Implementation:** `path/to/merge_sort.cpp`
* **Time Complexity:** O(n log n) for all cases.

### 1f. Heap Sort
* **Implementation:** `path/to/heap_sort.cpp`
* **Time Complexity:** O(n log n) for all cases.

---

## 2. Searching Algorithms

Implementation of linear and binary search and analysis of their time complexities.

### 2a. Linear Search
* **Implementation:** `path/to/linear_search.cpp`
* **Time Complexity:** O(n)

### 2b. Binary Search
* **Implementation:** `path/to/binary_search.cpp`
* **Time Complexity:** O(log n)

---

## 3. Strassen's Matrix Multiplication
* **Implementation:** `path/to/strassen.cpp`
* **Description:** An efficient algorithm for matrix multiplication that is faster than the standard O(n^3) algorithm.
* **Time Complexity:** O(n^log2(7)) ≈ O(n^2.81)

---

## 4. Binomial Coefficient Computation
* **Implementation:** `path/to/binomial_coefficient.cpp`
* **Description:** A program to compute C(n, k) using dynamic programming.
* **Time Complexity:** O(n*k)

---

## 5. Prim's Algorithm
* **Implementation:** `path/to/prims.cpp`
* **Description:** A greedy algorithm to find the Minimum Spanning Tree (MST) for a weighted undirected graph.
* **Time Complexity:** O(E log V) using a binary heap.

---

## 6. Dijkstra's Algorithm
* **Implementation:** `path/to/dijkstra.cpp`
* **Description:** An algorithm for finding the shortest paths between nodes in a graph, which may represent, for example, road networks.
* **Time Complexity:** O(E log V) using a priority queue.

---

## 7. Bellman-Ford Algorithm
* **Implementation:** `path/to/bellman_ford.cpp`
* **Description:** An algorithm that computes shortest paths from a single source vertex to all of the other vertices in a weighted digraph. It is slower than Dijkstra's but more versatile, as it is capable of handling graphs in which some of the edge weights are negative numbers.
* **Time Complexity:** O(V*E)

---

## 8. DFS and BFS
* **Implementation:** `path/to/graph_traversal.cpp`
* **Description:** Implementation of Depth First Search and Breadth First Search graph traversal algorithms.
* **Time Complexity:** O(V + E) for both algorithms.

---

## 9. Bucket Sort
* **Implementation:** `path/to/bucket_sort.cpp`
* **Description:** A distribution sort algorithm that works by distributing the elements of an array into a number of buckets.
* **Time Complexity:**
    * Best Case: O(n + k)
    * Average Case: O(n + k)
    * Worst Case: O(n^2)

---

## 10. Topological Sort
* **Implementation:** `path/to/topological_sort.cpp`
* **Description:** A linear ordering of vertices such that for every directed edge from vertex u to vertex v, u comes before v in the ordering.
* **Time Complexity:** O(V + E)

---

## 11. Approximate Vertex Cover
* **Implementation:** `path/to/vertex_cover.cpp`
* **Description:** An algorithm to find an approximate solution for the NP-hard vertex cover problem. This implementation compares the approximate solution with a brute-force solution on small graph instances.

---

## 12. City Distances Simulation
* **Implementation:** `path/to/city_distances.cpp`
* **Description:** A simulation to find routes between cities using a heuristic approach and comparing the results to the optimal solution on small datasets.

---

## 13. Integer Implementation and Error Probability
* **Implementation:** `path/to/integer_test.cpp`
* **Description:** Implementation and testing of operations on various integer types, calculating the probability of error.

---

## 14. Large Dataset Sorting and Visualization
* **Implementation:** `path/to/large_sort_visualizer.cpp`
* **Description:** A program to sort large datasets and visualize the execution time over multiple runs to analyze performance.

---

## 15. Large Matrix Multiplication Speedup
* **Implementation:** `path/to/large_matrix_multiply.cpp`
* **Description:** A program to multiply two large matrices and analyze the speedup gained compared to a standard serial implementation.

---

### How to Compile and Run
To compile a C++ program (e.g., `insertion_sort.cpp`):
```bash
g++ insertion_sort.cpp -o insertion_sort
