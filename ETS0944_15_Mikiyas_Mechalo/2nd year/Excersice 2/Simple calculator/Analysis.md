# Analysis for Basic Calculator Application

 ##    1. Problem Description: 
Design an algorithm using flowchart and write the implementation of
simple calculator that perform basic arithmetic operation in C++
language. The program should input type of operator and the
operands. The program only exit when the user enter zero (0) at the
end of the operation.

   ## 2. Analysis

Input: Two numbers and an operator<br/>
Output: The result of the operation <br/>
Process: <br/>
  1. Variable declaration: float x,y; int exit; char operators;<br/>
  2. Prompt the user to enter the first number and Accept the user input.<br/>
  3. Prompt the user to enter the operator and Accept the user input.<br/>
  4. Prompt the user to enter the second number and Accept the user input.<br/>
  5. Compute and display the operation based on the operator<br/>
  6. Prompt the user to input 0 to exit <br/>
  7. if the user inputs 0 exit else go to 1 and repeat

## 3. Pseudo code
 
  Step 1: start <br/>
  Step 2: read the first number(x)<br/>
  Step 3: read the operator<br/>
  Step 4: read the second number(y)<br/>
  Step 5: if operator == + print x + y<br/>
          else if operator == '-' print x - y<br/>
          else if operator == '-' print x - y<br/>
          else if operator == '*' / 'x' / 'X' print x * y<br/>
          else if operator == '/' print x / y
  Step 6: prompt the user to enter 0 to exit.<br/>
  Step 7: read exit_code<br/>
  Step 8: if exit_code == 0 go to step 9<br/>
    else go to step 2<br/>
  Step 9: stop<br/>

   ##   4. Design the program
### 4.1 Variable declaration and initialization (What and How?)
  &nbsp;	float x,y; int exit; char operators;<br/>
### 4.2 Reading input data (How?)
	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter an operator +, -, *, /: ";
	cin >> operators;
	cout << "Enter the second number: ";
	cin >> y;
### 4.3 Perform operation - compute the result and Print result.(How?)
	switch (operators)
        {
        case '+':
            cout << "The result is " << x + y <<'\n';
            break;
        case '-':
            cout << "The result is " << x - y <<'\n';
            break;
        case '*':
        case 'x':
        case 'X':
            cout << "The result is " << x * y <<'\n';
            break;
        case '/':
            cout << "The result is " << x / y <<'\n';
            break;
 ## 5. Flowchart
 ![Flowcahrt](https://github.com/mikiyasmechalo/Codify/blob/main/ETS0944_15_Mikiyas_Mechalo/Imges/1/Screenshot%202023-11-17%20232022.png)
