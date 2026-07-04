## Vectors (Dynamic Arrays)

Vectors are similar to arrays, but unlike arrays, their size is **dynamic**.

**Why use Vectors?**
- Dynamic memory allocation
- Size is **not fixed**
- Size can change during runtime
- Elements are stored in the **heap**
- Declaration:
  ```cpp
  vector<int> v;
  ```

---

### Common Vector Functions

| Function | Description |
|----------|-------------|
| `vector<int> v;` | Creates an empty vector |
| `v.push_back(x);` | Adds an element at the end |
| `v.insert(v.end(), {1,2,3});` | Inserts multiple elements at the end |
| `v.pop_back();` | Removes the last element |
| `v.size();` | Returns the number of elements |
| `v.front();` | Returns the first element |
| `v.back();` | Returns the last element |
| `v[i]` | Access element at index `i` |
| `v.at(i)` | Access element at index `i` (bounds-checked) |

---

### Size vs Capacity

**Size**
- Number of elements currently present in the vector.

**Capacity**
- Amount of memory allocated for the vector.
- Capacity is always **greater than or equal to size**.

**Capacity Growth**
When the vector becomes full, it automatically allocates a larger memory block (typically **doubling its capacity**) and copies the existing elements.

Example:

```
Capacity:
1 → 2 → 4 → 8 → 16 → 32 → ...
```

Example:

```cpp
vector<int> v;

v.push_back(10);   // Size = 1, Capacity = 1
v.push_back(20);   // Size = 2, Capacity = 2
v.push_back(30);   // Size = 3, Capacity = 4
v.push_back(40);   // Size = 4, Capacity = 4
v.push_back(50);   // Size = 5, Capacity = 8
```

---

### Arrays vs Vectors

| Arrays | Vectors |
|---------|---------|
| Fixed size | Dynamic size |
| Stored in stack (generally) | Stored in heap |
| Size cannot change | Size can grow/shrink during runtime |
| Faster for fixed-size data | More flexible for dynamic data |
