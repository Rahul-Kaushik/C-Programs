For and While loop: Both loops serve the same purpose: to execute a block of code multiple times. However, there are some differences between the two that can make one more suitable for a given situation than the other.

1.The "for" loop is often used when the number of iterations is known beforehand
2.The loop control statement in a "for" loop consists of three parts: an initialization, a condition, and an iteration.
3.The initialization sets a counter to a starting value, the condition tests the counter against a final value, and the iteration updates the counter after each iteration. 
4.The "for" loop is well suited for tasks that require a fixed number of iterations, such as iterating over an array.

*******************
1.The "while" loop, on the other hand, is used when the number of iterations is unknown or when the loop must continue to execute as long as a certain condition is true
2.The control statement in a "while" loop consists of only a condition, which is tested before each iteration. 
3.The "while" loop is well suited for tasks that require an indefinite number of iterations, such as reading input from a user until a sentinel value is entered.
******************
"for" loop is best suited for tasks that require a fixed number of iterations, while the "while" loop is best suited for tasks that require an indefinite number of iterations.
******************
Symbolic constants:
Unlike variables, symbolic constants do not change their value during the execution of the program. They are used to increase the readability and maintainability of the code, as well as to make it easier to modify the code in the future.
There are two ways to define a symbolic constant in C: using the "#define" preprocessor directive, or using the "const" keyword.

The "#define" preprocessor directive is used to define a symbolic constant by replacing its name with its value in the source code before the program is compiled.
#define PI 3.14159265
The "const" keyword is used to define a symbolic constant with a type, which makes it more type-safe than the "#define" preprocessor directive. For example:
const double PI = 3.14159265;

Both of these methods result in the same behavior, but using the "const" keyword is generally preferred, as it provides more type safety and makes it easier to debug the code.
