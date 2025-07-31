# Linked List Implementations in C

**Author**: [Your Name]

**Last updated**: July 31, 2025

---

## Overview

This project showcases implementation, usage, and analysis of **singly linked lists**, **doubly linked lists**, **circular linked lists**, and **circular doubly linked lists** in C. Each type is explained with clear diagrams, example code modules, and a detailed performance comparison with arrays. This README serves as both documentation and a learning resource.

---

## Features

- **Singly Linked List**: Basic operations (insert, delete, display, search)
- **Doubly Linked List**: Bi-directional traversal support
- **Circular Linked List**: The last node points back to the first, creating a loop
- **Circular Doubly Linked List**: Supports bi-directional traversal in a circular manner
- **Performance Analysis**: Time/space complexity for each operation
- **Comparison Table** with Arrays

---

## Diagrams

**Singly Linked List**  
```

[Data|Next] → [Data|Next] → [Data|Next] → NULL

```

**Doubly Linked List**  
```

NULL ⇄ [Prev|Data|Next] ⇄ [Prev|Data|Next] ⇄ [Prev|Data|Next] ⇄ NULL

```

**Circular Linked List**  
```

[Data|Next] → [Data|Next] → [Data|Next]
↑___________________________________|

```

**Circular Doubly Linked List**  
```

[Prev|Data|Next] ⇄ [Prev|Data|Next] ⇄ [Prev|Data|Next]
↑_________________________________________________|

```

---

## Installation

Clone this repository, if you are hosting it on GitHub (replace `<your-repo-url>` with your actual repo):

```

git clone <your-repo-url>
cd linked-list-c

```

---

## Usage

Each implementation is provided as a separate `.c` file. To compile and run:

```

gcc singly.c -o singly
./singly

gcc doubly.c -o doubly
./doubly

gcc circular.c -o circular
./circular

gcc circular_doubly.c -o circular_doubly
./circular_doubly

```

---

## Performance Analysis

| Operation                | Linked List (Singly/Doubly) | Array      |
|-------------------------|-----------------------------|------------|
| Access (by index)       | O(n)                        | O(1)       |
| Insert/Delete at Front  | O(1)                        | O(n)       |
| Insert/Delete at End    | O(1) (doubly), O(n) (singly)| O(1)/O(n)  |
| Insert/Delete at Middle | O(n)                        | O(n)       |
| Memory Usage            | Higher (extra pointers)     | Compact    |
| Cache Locality          | Poor                        | Good       |

---

## Advantages & Disadvantages

| **Linked Lists**                    | **Arrays**                        |
|-------------------------------------|-----------------------------------|
| **Dynamic size, easy to grow/shrink** | **Fixed size, hard to resize**     |
| **Efficient insertions/deletions**  | **Fast, direct element access**    |
| **No unused memory slots**          | **Better cache performance**       |
| **No random access**                | **Insertions/deletions are slow**  |
| **Extra memory for pointers**       | **Must specify size upfront**      |

---

## File Structure

```

linked-list-c/
├── singly.c           \# Singly linked list implementation
├── doubly.c           \# Doubly linked list implementation
├── circular.c         \# Circular linked list implementation
├── circular_doubly.c  \# Circular doubly linked list implementation
├── benchmark.c        \# Performance comparison with arrays (optional)
└── README.md          \# This documentation

```

---

## Contributing

Issues, feature requests, and pull requests are welcome! Please ensure your changes are well-documented and tested.

---

## References

- [GeeksforGeeks: Linked List in C]
- [Data Structures and Algorithms textbooks]
- **Example GitHub projects**:  
  - Simple C implementations by BaseMax  
  - Doubly linked list by clibs/list

---



