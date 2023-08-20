
This repository contains a C program that implements a solution for a given recurrence relation using three different approaches: recursive, iterative, and dynamic programming with memoization.

## Development Environment

The program is written in C programming language and can be compiled and executed on various platforms that support C development. Here's the basic setup you'll need:

- **Compiler:** A C compiler is required to compile the source code. Popular choices include GCC (GNU Compiler Collection) or Clang. Make sure you have one of these installed on your system.

- **Operating System:** The program can be compiled and run on Windows, Linux, and macOS.

## Compilation and Execution

Follow these steps to compile and run the program:

1. **Clone the Repository:**
markdown
Copy code

2. **Compile the Source Code:**
- Open a terminal window in the repository directory.
- Use the appropriate compiler command to compile the source code. For GCC, you can use:
  ```
  gcc -o recurrence_solver recurrence_solver.c
  ```
  This will generate an executable file named `recurrence_solver` in the same directory.

3. **Run the Program:**
- After successful compilation, you can run the program using the following command:
  ```
  ./recurrence_solver
  ```
- The program will display the results for the recurrence relation using three different approaches: recursive, iterative, and dynamic programming with memoization.

4. **Changing Input Value:**
- By default, the program is set to solve the recurrence relation for `n = 10`. You can modify the value of `n` in the source code to test different input values.


Recursive Approach:

Advantages: It's the most straightforward way to represent the mathematical definition. Easy to understand and implement.
Disadvantages: Inefficient for large values of n due to repeated calculations. It leads to exponential time complexity. Each function call introduces overhead.
Iterative Approach:

Advantages: More efficient than the recursive approach since it avoids redundant calculations by building the solution from the ground up. It has a linear time complexity, making it suitable for larger values of n.
Disadvantages: May still be less efficient compared to the memoized dynamic programming approach for very large values of n.
Dynamic Programming with Memoization:

Advantages: Efficient and avoids redundant calculations by storing already computed values in a memoization table. This leads to significant performance improvement, especially for large n values.
Disadvantages: Slightly more complex than the iterative approach due to the need to manage the memoization table. Requires extra space for the memoization table.