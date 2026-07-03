/* ==========================
         ARRAYS - BASICS
   ========================== */

// Arrays = Collection of elements of the same data type
// Stored in contiguous memory locations
// Static memory allocation (size is fixed at compile time)
// Elements are accessed using index (starts from 0)
// Syntax:
// int arr[5];   // Array of 5 integers

/* ==========================
       ARRAY SORTING (STL)
   ========================== */

#include <algorithm>

// Ascending Order
sort(arr, arr + size);

// Descending Order
sort(arr, arr + size, greater<int>());

// Reverse an Array
reverse(arr, arr + size);

/* ==========================
       TIME COMPLEXITY
   ========================== */

// Access by Index      -> O(1)
// Linear Search        -> O(n)
// Binary Search*       -> O(log n)
// Sort                 -> O(n log n)
// Reverse              -> O(n)

// *Binary Search works only on a SORTED array.

/* ==========================
          IMPORTANT
   ========================== */

// Array size cannot be changed after declaration.
// Stores elements in contiguous memory.
// Suitable when the number of elements is fixed.

