# Analysis for calculating x raised to y

  ## 1. Problem Description: 
Write a C++ program that finds the result of x^y, where x and y are input by the user

  ## 2. Analysis
Input: x and y (two numbers one base and one power)<br/>
Output: x raised to y (x^y)<br/>
Process: <br/>
          &nbsp;1. Variable declaration: x, y, z<br/>
          &nbsp;2. Prompt the user to enter 2 numbers (x and y)<br/>
          &nbsp;3. Accept the user input.<br/>
          &nbsp;4. Calculate x raised to y using the pow() function<br/>
          &nbsp;5. Display the answer
## 3. Design the program

#### 3.1 Variable declaration and initialization (What and How?)
&nbsp;int x, y, z;<br/>
#### 3.2 Reading input data (How?)
&nbsp;cout << "Please enter the number to be powered: ";<br/>
 &nbsp;   cin >> x;<br/>
 &nbsp;cout << "Please enter the power: ";<br/>
 &nbsp;   cin >> y;<br/>
    
 #### 3.3 Perform operation - (How?)
&nbsp; z= pow(x, y);
#### 3.4 Print result (X^y). (How?)
&nbsp; cout << x << " the power of " << y << " is " << z;<br/>
