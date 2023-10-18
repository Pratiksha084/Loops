# Loops

THEORY 

In Programming, sometimes there is a need to perform some operation more than once or (say) n number of times. Loops come into use when we need to repeatedly execute a block of statements. 

For example: Suppose we want to print “Hello World” 10 times. This can be done in two ways as shown below: 

Manual Method (Iterative Method)
Manually we have to write cout for the C++ statement 10 times. Let’s say you have to write it 20 times (it would surely take more time to write 20 statements) now imagine you have to write it 100 times, it would be really hectic to re-write the same statement again and again. So, here loops have their role.


// C++ program to Demonstrate the need of loops
#include <iostream>
using namespace std;
 
int main()
{
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    return 0;
}
Output

Hello World
Hello World
Hello World
Hello World
Hello World

Time complexity: O(1)

Space complexity: O(1)

Using Loops
In Loop, the statement needs to be written only once and the loop will be executed 10 times as shown below.  In computer programming, a loop is a sequence of instructions that is repeated until a certain condition is reached. 

There are mainly two types of loops:  
Entry Controlled loops: In this type of loop, the test condition is tested before entering the loop body. For Loop and While Loop is entry-controlled loops.
Exit Controlled Loops: In this type of loop the test condition is tested or evaluated at the end of the loop body. Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false. the do-while loop is exit controlled loop.
Loops in C++

S.No.	Loop Type and Description
1.

while loop
– First checks the condition, then executes the body.

2.

for loop
– firstly initializes, then, condition check, execute body, update.

3.

do-while

loop

– firstly, execute the body then condition check

For Loop-
A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times. The loop enables us to perform n number of steps together in one line. 

Syntax: 

for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
}

Explanation of the Syntax:
Initialization statement: This statement gets executed only once, at the beginning of the for loop. You can enter a declaration of multiple variables of one type, such as int x=0, a=1, b=2. These variables are only valid in the scope of the loop. Variable defined before the loop with the same name are hidden during execution of the loop.
Condition: This statement gets evaluated ahead of each execution of the loop body, and abort the execution if the given condition get false.
Iteration execution: This statement gets executed after the loop body, ahead of the next condition evaluated, unless the for loop is aborted in the body (by break, goto, return or an exception being thrown.)
NOTES:
The initialization and increment statements can perform operations unrelated to the condition statement, or nothing at all – if you wish to do. But the good practice is to only perform operations directly relevant to the loop.
A variable declared in the initialization statement is visible only inside the scope of the for loop and will be released out of the loop.
Don’t forget that the variable which was declared in the initialization statement can be  modified during the loop, as well as the variable checked in the condition.


ALGORITHM

Calculator program using Switch-Case

1.Start

2.Declare variables for two operands (e.g., num1 and num2), a character variable (e.g., operation) to store the selected operation, and a variable for the result (e.g., result).

3.Prompt the user to enter the first operand (num1).

4.Prompt the user to select an operation (e.g., '+', '-', '*', or '/') and store it in the operation variable.

5.Prompt the user to enter the second operand (num2).

6.Use a switch-case statement to perform the selected operation:

7.Evaluate the value of operation:

If operation is '+', add num1 and num2 and store the result in result.

If operation is '-', subtract num2 from num1 and store the result in result.

If operation is '*', multiply num1 and num2 and store the result in result.

If operation is '/', divide num1 by num2 and store the result in result.

8.Display the result to the user.

9.End

Display Days of the Week :

1.Start

2.Declare a variable (e.g., dayNumber) to store the user's input for the day number.

3.Prompt the user to enter a number between 1 and 7.

4.Read and store the user's input in the dayNumber variable.

5.Use a switch-case statement to display the corresponding day of the week based on dayNumber:

6.For each case (1 to 7), display the name of the corresponding day.

7.Include a default case to handle inputs outside the range 1-7 and display "Wrong input."

8.End

Print 50 Numbers using While Loop:

1.Start

2.Declare an integer variable (e.g., num) and initialize it to 1 (the starting number).

3.Create a while loop that continues while num is less than or equal to 50:

4.Inside the loop:

5.Print the current value of num.

6.Increment num by 1.

7.End

Print "Hello, World!" 10 Times using For Loop Algorithm:
1.Start

2.Create a for loop that iterates from 1 to 10 (inclusive):

3.Initialize a loop variable (e.g., i) to 1.

4.Continue the loop as long as i is less than or equal to 10.

5.In each iteration of the loop:

6.Print "Hello, World!" to the output.

7.End

Print Number Triangle using For Loop Algorithm:
1.Start

2.Declare a variable (e.g., n) to store the number of rows in the triangle pattern.

3.Prompt the user to enter the number of rows (n).

4.Create a for loop that iterates from 1 to n to represent each row:

5.Initialize a loop variable (e.g., row) to 1.

6.Continue the outer loop as long as row is less than or equal to n.

7.Inside the outer for loop, create a nested for loop to print the numbers in each row:

8.Initialize a loop variable (e.g., num) to 1.

9.Continue the inner loop as long as num is less than or equal to row.

10.Inside the inner for loop, print the value of num followed by a space.

11.After the inner for loop completes, print a newline character to move to the next row.

12.End of the inner loop.

13.After the outer for loop completes, you will have printed the number triangle pattern.

14.End

EXPECTED OUTPUT

Calculator program using switch case

Enter the first Number :2

Enter the second Number :3

Enter the operation to execute :

1.Sum

2.Substraction

3.Multiplication

4.Division

1

Display Days of the Week

Enter a day number:

1

Monday:

Print 50 Numbers using While loop

1

2

3

4

5

6

7

8

9

10

11

12

13

14

15

16

17

18

19

20

21

22

23

24

25

26

27

28

29

30


31

32

33

34

35

36


37

38

39

40

41

42

43
44


45

46

47

48

49

50



Print "Hello World" 10 times usin for loop

hello world :1

hello world :2

hello world :3

hello world :4

hello world :5

hello world :6

hello world :7

hello world :8

hello world :9

hello world :10

Print number triangle using for loop

1

22

333

4444

55555
