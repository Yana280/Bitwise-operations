# Bitwise-operations
## Bitwise XOR operator of 2 numbers
This C program computes the bitwise XOR of two integer variables x and y, and stores the result in a new variable a. 
The program then prints the value of a to the console. 
The bitwise XOR operator (^) compares the binary representation of each integer bit-by-bit, and returns an integer with a 1 in each position where the bits of x and y are different, and a 0 where they are the same. 
The resulting output of this program is "Bitwise XOR of two numbers is x&y is 8", which indicates that the bitwise XOR of 6 and 14 is 8.
![Screenshot (304)](https://user-images.githubusercontent.com/125993593/234580248-8feefaa8-09d1-4e0d-b278-cb1767d81faf.png)
### Algorithm
Start

Declare integer variable x and assign the value 6 to it

Declare integer variable y and assign the value 14 to it

Compute the bitwise XOR of x and y using the ^ operator and store the result in a new integer variable a

Print the value of a to the console using the printf function with the format string "Bitwise XOR of two numbers is x&y is %d"

End.

## Even or odd using Bitwise operators
The & operator performs a bitwise AND operation on c and the number 1. 
If the least significant bit of c is set to 1, the result of the bitwise AND operation will be 1, 
which is considered true in C. If the least significant bit of c is set to 0, the result of the bitwise AND operation will be 0, which is considered false in C.
If the number is odd, the program prints the string "Odd" to the console. Otherwise,
if the number is even, the program prints the string "Even" to the console.
The \n character is used to start a new line after the prompt.
The %d format specifier tells scanf to read an integer from the user and store it in the variable c.
![Screenshot (305)](https://user-images.githubusercontent.com/125993593/234582413-2c80c7b2-5a19-43ad-a824-ba5f4e0560dc.png)
### Algorithm
Start

Declare an integer variable c.

Prompt the user to enter a number using the printf function.

Read the input number from the user using the scanf function and store it in the variable c.

Check whether the least significant bit of c is set to 1 using the & operator.

If the result of the bitwise AND operation is 1, print the string "Odd" to the console using the printf function.

If the result of the bitwise AND operation is 0, print the string "Even" to the console using the printf function.

End.

## Bitwise OR operator of two numbers
This program performs a bitwise OR operation on two integers x and y, and then prints the result to the console. 
The value of x is set to 6 and the value of y is set to 14.
The program performs the bitwise OR operation using the | operator, stores the result in a new integer variable a, and then prints the value of a to the console using the printf function. Finally, the program returns 0 to indicate successful execution.
![Screenshot (306)](https://user-images.githubusercontent.com/125993593/234585344-150e5ffd-3800-4d87-9f09-f4118df1e06e.png)
Start
Define two integer variables x and y.

Set the value of x to 6 and the value of y to 14.

Perform the bitwise OR operation on x and y using the | operator.

Store the result of the bitwise OR operation in a new integer variable a.

Print the string "Bitwise OR of two numbers is x&y is " to the console using the printf function.


Print the value of a to the console using the %d format specifier and the printf function.

Return 0 to indicate successful program execution.

End.






