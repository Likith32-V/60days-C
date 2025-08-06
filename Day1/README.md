# 📅 Day 1 — Deep Dive into C Memory Segments (Stack, BSS, Data)

---

## ✅ Objective

To understand how memory is organized in a C program — focusing on:
- Types of variables: global, static, local, and pointers.
- Where these variables live in memory (Stack, BSS, Data, Text).
- How to verify this practically using addresses.

---

## 📘 Detailed Theory (For Future Reference)

### 🔧 **Memory Layout of a C Program**

When a C program is compiled and run, it uses different **memory segments** to manage data efficiently. Here’s how it’s typically divided:

1. **Text Segment:**
   - Contains **executable machine code** (i.e., compiled instructions).
   - Read-only — trying to write here causes a segmentation fault.
   - Example: function definitions live here.

2. **Data Segment (Initialized Data):**
   - Holds global/static variables **with non-zero initial values**.
   - Allocated at program load time and persists throughout execution.

3. **BSS Segment (Block Started by Symbol):**
   - Stores **global/static variables with zero or no initialization**.
   - Memory is zeroed out by the loader during startup.
   - Efficient since it doesn’t store actual zeros in the binary.

4. **Stack:**
   - Stores **local variables** and **function call frames**.
   - Grows **downward** (from high memory to low).
   - Fast access, but limited in size.

5. **Heap:**
   - Used for **dynamic memory allocation** (`malloc`, `calloc`, etc.).
   - Grows **upward**.
   - Requires manual memory management.

---

##  Variable Scope and Storage Class Summary

| Variable Type         | Storage Location | Segment     | Lifetime        |
|-----------------------|------------------|-------------|-----------------|
| Global (no init)      | Global scope     | BSS         | Entire Program  |
| Global (init to 5)    | Global scope     | Data        | Entire Program  |
| `static int x;`       | Local scope      | BSS         | Entire Program  |
| `int y = 5;` (local)  | Function scope   | Stack       | Inside Function |
| `int *p = NULL;`      | Function scope   | Stack       | Inside Function |

---
## 🧪 Tasks & Code Submissions

### ✅ Task 1: Print a Local Variable (Stack)
> This task focused on declaring and printing a local (stack) variable using `printf()`. It helped verify basic syntax, variable declaration, and output handling in C.

---

### ✅ Task 2: Print Variable Addresses from Different Segments (Global, Static, Local, Pointer)
> This task explored how variables from different memory segments (BSS, static, stack, and heap) are stored in memory by printing their addresses. Useful for understanding how memory is managed in C.

---

### ✅ Task 3: Print Memory Locations (BSS, Static, Stack, NULL Pointer)
> This task reinforced concepts of uninitialized globals (BSS), statics, and how pointers behave when assigned NULL. It also involved printing memory addresses to understand memory layout more clearly.

