# Analysis for calculating x raised to y

  ## 1. Problem Description: 
Write a C++ program that finds the result of x^y, where x and y are input by the user

  ## 2. Analysis
Input: x and y (two numbers one base and one power)<br/>
Output: x raised to y (x^y)<br/>
Process: <br/>
  1. Variable declaration: x, y, z<br/>
  2. Prompt the user to enter 2 numbers (x and y)<br/>
  3. Accept the user input.<br/>
  4. Calculate x raised to y using the pow() function<br/>
  5. Display the answer

  ## 3. Pseudo code
  Step 1: start<br/>
  Step 2: read x <br/>
  Step 4: read y <br/>
  Step 5: calculate x^y <br/>
  Step 5: print the result<br/>
  Step 6: stop<br/>
  
## 4. Design the program

#### 4.1 Variable declaration and initialization (What and How?)
&nbsp;int x, y, z;<br/>
#### 4.2 Reading input data (How?)
&nbsp;cout << "Please enter the number to be powered: ";<br/>
 &nbsp;   cin >> x;<br/>
 &nbsp;cout << "Please enter the power: ";<br/>
 &nbsp;   cin >> y;<br/>
    
 #### 4.3 Perform operation - (How?)
&nbsp; z= pow(x, y);
#### 4.4 Print result (X^y). (How?)
&nbsp; cout << x << " the power of " << y << " is " << z;<br/>

## 5. Flowchart
![flowchart](https://github.com/mikiyasmechalo/Codify/blob/main/ETS0944_15_Mikiyas_Mechalo/Imges/1/Screenshot%202023-11-17%20234141.png)
