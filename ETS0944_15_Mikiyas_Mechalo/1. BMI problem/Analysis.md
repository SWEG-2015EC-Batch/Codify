Analysis for BMI Calculator

1. Problem Description: 

Write a C++ program to calculate the Body mass index of a user by accepting the user’s height and weight

2. **Analysis**
    Input: Height and Weight
    Output: The Body mass index
    Process: 
      Variable declaration: height and weight
      Prompt the user to enter their weight and height respectively
      Accept the user input.
      Calculate the Body mass index as BMI = weight / height squared
      Display the user’s BMI
  
  3. Design the program
3.1 Variable declaration and initialization (What and How?)
	double height, weight;
3.2 Reading input data (How?)
	cout << "Please enter your mass in kilograms: ";
            cin >> mass;
            cout << "Please enter your height in meters: ";
             cin >> height;
3.3 Perform operation - compute the BMI (How?)
	BMI = mass/ (height * height);
3.5 Print result (BMI). (How?)
	cout << “Your Body mass index is ” << BMI;
