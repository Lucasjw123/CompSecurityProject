
# Progress on 2 items from the checklist:
## 1. Fixed a buffer overflow vulnerability in the input parser: Added bounds checking to prevent the user from inputting more characters than the buffer can hold. Work completed: added bounds checking to input parser function.
## 2. Added exception handling to the area calculation function: Implemented try-catch blocks to handle potential errors when calculating the area of a shape. Work completed: added try-catch blocks to area calculation function.
# Explanation of work completed:
## 1. In the first fix, I identified that the input parser function could be vulnerable to a buffer overflow attack if the user inputs more characters than the buffer can hold. To prevent this, I added bounds checking to ensure that the input string does not exceed the maximum buffer size. This eliminates the risk of a buffer overflow attack.
## 2. In the second fix, I identified that the area calculation function could potentially throw exceptions if the input values are invalid. To handle this, I implemented try-catch blocks to catch any potential exceptions and handle them gracefully. This prevents the program from crashing or displaying error messages to the user.
# Next 4 items to be attempted:
## 1. Add support for additional shapes (priority: high, difficulty: medium).
## 2. Implement input validation for all user input (priority: high, difficulty: medium).
## 3. Add logging to the program to record errors and exceptions (priority: medium, difficulty: low).
## 4. Implement a secure random number generator for use in the program (priority: high, difficulty: high).
