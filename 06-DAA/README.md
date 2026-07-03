# Recursion in C++

This repository contains my implementations of fundamental recursion concepts in C++. It covers recursive thinking, backtracking, mathematical recursion, string manipulation, recursion trees, divide & conquer algorithms, and recursive searching techniques.

---

### Topics Covered

- Introduction to Recursion
- Base Case & Recursive Case
- Backtracking
- Recursive Mathematical Problems
- String Manipulation using Recursion
- Divide & Conquer
- Recursion Tree
- Merge Sort
- Recursive Binary Search

---

### Concepts Implemented

| Concept | Description |
|---------|-------------|
| Print N to 1 | Basic Recursion |
| Print 1 to N | Backtracking |
| Sum of N Natural Numbers | Recursive Accumulation |
| Power (xⁿ) | Recursive Exponentiation |
| Fibonacci Number | Multiple Recursive Calls |
| Factorial | Recursive Multiplication |
| Reverse String | Recursion with Two Pointers |
| Merge Sort | Divide & Conquer |
| Binary Search | Recursive Search |

---

### Practice Programs

| Program | Technique Used |
|---------|----------------|
| Print N to 1 | Simple Recursion |
| Print 1 to N | Backtracking |
| Sum of N Numbers | Parameterized Recursion |
| Power Function | Recursive Formula |
| Fibonacci | Multiple Recursive Calls |
| Factorial | Mathematical Recursion |
| Reverse String | Recursion + Two Pointers |
| Merge Sort | Divide & Conquer |
| Binary Search | Recursive Binary Search |

---

### Important Concepts
##

**Recursion**

A function that calls itself until a **base case** is reached.

Example:

```cpp
int factorial(int n){
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}
```

##

**Base Case**

Stops further recursive calls and prevents infinite recursion.

##

**Backtracking**

The recursive call executes first, and statements after the call execute while returning from recursion.

##

**Divide & Conquer**

A problem-solving technique where a problem is:

1. Divided into smaller subproblems
2. Solved recursively
3. Combined to obtain the final solution

Example:

- Merge Sort
- Binary Search

---

### Algorithms Practiced

- Recursive Traversal
- Backtracking
- Factorial
- Fibonacci
- Power Function
- Reverse String
- Merge Sort
- Recursive Binary Search

---

### Time Complexity

| Algorithm | Complexity |
|-----------|-----------:|
| Print N to 1 | O(n) |
| Print 1 to N | O(n) |
| Sum of N Numbers | O(n) |
| Power (Basic) | O(n) |
| Factorial | O(n) |
| Reverse String | O(n) |
| Fibonacci (Recursive) | O(2ⁿ) |
| Binary Search | O(log n) |
| Merge Sort | O(n log n) |

---

### Key Learning

Through these implementations, I learned:

- Designing recursive algorithms
- Identifying base and recursive cases
- Understanding recursion trees
- Applying backtracking concepts
- Solving mathematical problems recursively
- Using recursion for string manipulation
- Implementing Divide & Conquer algorithms
- Comparing recursive algorithm complexities

These concepts provide the foundation for advanced topics such as Dynamic Programming, Trees, Graphs, Backtracking, and Competitive Programming.

---

### Repository Structure

```text
06-Recursion/

README.md

basic_recursion.cpp

backtracking.cpp

factorial.cpp

fibonacci.cpp

power.cpp

reverse_string.cpp

merge_sort.cpp

recursive_binary_search.cpp
```

---

### Language Used

- C++

---

### Progress

- ✅ Basic Recursion
- ✅ Backtracking
- ✅ Mathematical Recursion
- ✅ String Recursion
- ✅ Merge Sort
- ✅ Recursive Binary Search
- 🔄 Quick Sort
- 🔄 Tower of Hanoi
- 🔄 N-Queens
- 🔄 Rat in a Maze
- 🔄 Sudoku Solver
