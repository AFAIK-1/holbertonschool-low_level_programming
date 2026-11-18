# Simple Calculator
Performs simple mathematical operations on 2 integers (a & b).
Menu is navigated through selection with int options 0-4:
- 1) Add
- 2) Subtract
- 3) Multiply
- 4) Divide
- 0) Quit

### Compile Command
Simple calculator is compiled with the following gcc command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

### Run Instructions
To run the program, the should input: ./calculator

### Supported Operations
Simple calculator runs basic arithmetic operations, such as: addition (+), subtraction (-),
multiplication (*), and division (/).

### Numeric Behaviour
This interpretation of the simple calculator only accepts integers for choices in the menu
and for variables A & B. Any other types of input shall result in an error code. Arithmetic
operations output an integer as well, except for division where it would result in a float
with 2 decimal numbers.

### Known Limitations
The objective of this program was to gauge the level of our programming knowledge and our
ability to code without the help of most external sources, most especially AI tools. As
such, the program only intends to run the most basic of functions. Simple calculator has
the following limits:
- Can only accept int inputs
- Can only output integers, except for division which outputs a .2f number
- The program may break or loop indefinitely with certain inputs as only basic inputs
are expected

