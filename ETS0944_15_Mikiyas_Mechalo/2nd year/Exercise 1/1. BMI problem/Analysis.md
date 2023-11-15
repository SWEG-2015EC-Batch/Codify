# Analysis for BMI Calculator

## 1. Problem Description: 

Write a C++ program to calculate the Body mass index of a user by accepting the user’s height and weight

## 2. **Analysis**
Input: Height and Weight </br>
Output: The Body mass index</br>
Process: </br>
Variable declaration: height and weight</br>
Prompt the user to enter their weight and height respectively</br>
Accept the user input.</br>
Calculate the Body mass index as BMI = weight / height squared</br>
Display the user’s BMI</br>
  ## 3. Pseudo code
Step 1: start </br>
Step 2: read the weight</br>
Step 3: read the height</br>
Step 4: compute the BMI </br>
BMI = weight / height^2</br>
Step 5: print the BMI</br>
Step 6: stop</br>

  ## 4. Design the program
### 4.1 Variable declaration and initialization (What and How?)
double height, weight;</br>
### 4.2 Reading input data (How?)
cout << "Please enter your mass in kilograms: ";</br>
    cin >> mass;</br>
    cout << "Please enter your height in meters: ";</br>
     cin >> height;</br>
### 4.3 Perform operation - compute the BMI (How?)
	BMI = mass/ (height * height);
### 4.5 Print result (BMI). (How?)
cout << “Your Body mass index is ” << BMI;
