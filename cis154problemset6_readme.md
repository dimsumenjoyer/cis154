Victor Van
00319912
Problem Set 6: Read Me
C - Professor Penta
2/24/2024, Due: 3/26/2024

Problem set 6.1 prints 10, 5, 6, 3, 4, and 2.
In the main function, 10 is the parameter of the loop function. n = 10 is the parameter, but then i = n which isn't a necessary step.
First i is printed out - 10.
Second, since (10) % 2 = 0, i now becomes i / 2 which is 5 and is printed.
Third, 5 is greater than 1, then (5) % 2 = 1, therefore i = i + 1 and 6 is printed.
Fourth, 6 is greater than 1, then (6) % = 0, therefore i = i / 2 and 3 is printed.
Fifth, 3 is greater than 1, then (3) % 2 = 1, therefore i = i + 1 and 4 is printed.
Sixth, 4 is greater than 1, then (4) % 2 = 0, therefore i = i / 2 and 2 is printed.
Seventh, 2 is greater than 1, then (2) % 2 = 0, therefore i = i / 2 and 1 is not greater than 1 and the program ends.

Problem set 6.2 is self-explanatory. However, I wonder if/when recursion is a better choice to use over while loops, for loops, and do while loops - which ones are most memory efficient, etc.

Problem set 6.3 is self-explanatory, although I used booleans to control the while loop - which I'm not sure if that's encouraged.

On problem set 6.4, in the function userInput, originally I used a recursive method for invalid integer inputs (that are not 0 or 1) but it caused bugs. The recursive call was under default. Therefore, I used a do while loop instead. I don't understand why this causes bugs.
I also initally used char 'n' or 'y' for the user_input, but that caused the program to crash which was why I switched to 0 and 1. I don't understand why it crashes the program.