# Data types in c++

**Name:** Akshit Chordia  
**PRN:** 24070123008  
**Division:** ENTC-A1  
**Title:** Understanding Data Types and Input/Output Operations in C++  
**Tools Used:** Visual Studio Code

---

## Overview

This section focuses on how different data types are used in C++ and how input and output operations are performed using `cin` and `cout`. Understanding data types is essential for writing programs that are both accurate and memory-efficient.

---

## Data Types and I/O Program

The goal of this program is to explore various C++ data types by taking input from the user and displaying the value along with its memory size.

### Key Concepts:
- Using the correct data type based on the type of value:
  - `int` for whole numbers
  - `float` and `double` for decimals
  - `char` for single characters
  - `string` for text
  - `bool` for true/false logic
- Taking input using `cin`
- Displaying output using `cout`

---

## Sample Output:
Enter any integer: 12
Integer = 12 and size is 4 bytes

Enter any number with decimal: 12.12
Float = 12.12 and size is 4 bytes

Enter any number with decimal: 12.78
Double = 12.78 and size is 8 bytes

Enter any string: akshit
String = akshit and size is 32 bytes

Enter any character: h
Character = h and size is 1 bytes

Enter any boolean: true
Boolean = 1 and size is 1 bytes


---

## Observations:

- A `bool` type uses **1 byte** of memory, not just 1 bit, due to memory alignment in most systems.
- A `double` provides more precision than a `float` but occupies **more memory** (8 bytes vs. 4 bytes).
- A `string` is a complex object type that dynamically manages memory, unlike primitive types like `int` or `char`.
- Selecting the right data type helps in writing **efficient and optimized** programs.

---

## Conclusion

This program helped visualize how different data types behave in terms of memory and value representation. It also reinforced the importance of using the appropriate data type depending on the nature of the data and memory usage. Mastery over data types and I/O handling lays the groundwork for writing efficient and maintainable C++ programs.

---

Submitted by **Akshit Chordia**  
**PRN:** 24070123008  
**Division:** ENTC-A1
