Analysis for Possible distance without refueling

     1. Problem Description: 
Write a C++ program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallon the automobile can be driven. The program outputs the number of miles the automobile can be driven without refueling.

    2. Analysis
Input: capacity and miles per gallon
Output: The distance possible without refueling 
Process: 
          1. Variable declaration: capacity , MPG and pd
          2. Prompt the user to enter the capacity and miles per gallons of the automobile
          3. Accept the user input.
          4. Calculate the Possible distance without refueling as Pd = MPG * capacity
          5. Display the Possible distance without refueling
     3. Design the program
3.1 Variable declaration and initialization (What and How?)
	double capacity, MPG, Pd;
3.2 Reading input data (How?)
	cout << "Please enter the automobile’s fuel gas tank capacity: ";
            cin >> capacity;
            cout << "Please enter the miles per gallon for the automobile: ";
             cin >> MPG;
3.3 Perform operation - compute the Possible distance without refueling(How?)
	Pd = MPG * capacity;
3.5 Print result (BMI). (How?)
	cout << “The automobile can go a distance of  ” << Pd << “ miles without refueling.”;
