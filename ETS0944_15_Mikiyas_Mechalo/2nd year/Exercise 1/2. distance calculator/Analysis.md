# Analysis for Possible distance without refueling

 ##    1. Problem Description: 
Write a C++ program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallon the automobile can be driven. The program outputs the number of miles the automobile can be driven without refueling.<br/>

   ## 2. Analysis

Input: capacity and miles per gallon<br/>
Output: The distance possible without refueling <br/>
Process: <br/>
  1. Variable declaration: capacity , MPG and pd<br/>
  2. Prompt the user to enter the capacity and miles per gallons of the automobile<br/>
  3. Accept the user input.<br/>
  4. Calculate the Possible distance without refueling as Pd = MPG * capacity<br/>
  5. Display the Possible distance without refueling<br/>


## 3. Pseudo code
 
  Step 1: start <br/>
  Step 2: read the capacity<br/>
  Step 3: read the miles per gallon<br/>
  Step 4: compute the possible distance<br/>
    Distance = capacity * miles per gallon<br/>
  Step 5: print the Distance<br/>
  Step 6: stop<br/>

   ##   4. Design the program
### 4.1 Variable declaration and initialization (What and How?)
&nbsp;	double capacity, MPG, Pd;<br/>
### 4.2 Reading input data (How?)
&nbsp;cout << "Please enter the automobile’s fuel gas tank capacity: ";<br/>
&nbsp;cin >> capacity;<br/>
&nbsp;cout << "Please enter the miles per gallon for the automobile: ";<br/>
&nbsp;cin >> MPG;<br/>
### 4.3 Perform operation - compute the Possible distance without refueling(How?)
	Pd = MPG * capacity;
### 4.5 Print result (Distance). (How?)
	cout << “The automobile can go a distance of  ” << Pd << “ miles without refueling.”;
