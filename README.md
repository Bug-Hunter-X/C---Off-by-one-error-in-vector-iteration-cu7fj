# C++ Off-by-one error in vector iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`.  The error occurs when the loop condition incorrectly includes the last index, which is beyond the valid range of the vector. This leads to undefined behavior and potential crashes.

The `bug.cpp` file contains the erroneous code.  The `bugSolution.cpp` file provides the corrected code.