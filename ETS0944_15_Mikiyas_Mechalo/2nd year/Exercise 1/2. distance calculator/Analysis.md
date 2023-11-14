# Analysis for Possible distance without refueling

 ##    1. Problem Description: 
Write a C++ program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallon the automobile can be driven. The program outputs the number of miles the automobile can be driven without refueling.<br/>

   ## 2. Analysis
Input: capacity and miles per gallon<br/>
Output: The distance possible without refueling <br/>
Process: <br/>
      &nbsp;  1. Variable declaration: capacity , MPG and pd<br/>
     &nbsp;   2. Prompt the user to enter the capacity and miles per gallons of the automobile<br/>
     &nbsp;   3. Accept the user input.<br/>
    &nbsp;    4. Calculate the Possible distance without refueling as Pd = MPG * capacity<br/>
     &nbsp;   5. Display the Possible distance without refueling<br/>
   ##   3. Design the program
3.1 Variable declaration and initialization (What and How?)<br/>
&nbsp;	double capacity, MPG, Pd;<br/>
3.2 Reading input data (How?)<br/>
	&nbsp;cout << "Please enter the automobile’s fuel gas tank capacity: ";<br/>
	&nbsp;cin >> capacity;<br/>
	&nbsp;cout << "Please enter the miles per gallon for the automobile: ";<br/>
	&nbsp;cin >> MPG;<br/>
3.3 Perform operation - compute the Possible distance without refueling(How?)<br/>
	&nbsp;Pd = MPG * capacity;<br/>
3.5 Print result (BMI). (How?)<br/>
	&nbsp;cout << “The automobile can go a distance of  ” << Pd << “ miles without refueling.”;<br/>
