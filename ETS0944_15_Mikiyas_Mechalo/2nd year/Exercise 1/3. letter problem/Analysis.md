# Analysis for Possible distance without refueling

  ## 1. Problem Description: 
Write a C++ program that converts a letter entered from the keyboard to its uppercase or lowercase equivalent.

  ## 2. Analysis
Input: a letter<br/>
Output: uppercase or lowercase version of the letter<br/>
Process: <br/>
  1. Variable declaration: letter<br/>
  2. Prompt the user to enter a letter<br/>
  3. Accept the user input.<br/>
  4. Check if the accepted letter is capital or small and convert it to its counterpart<br/>
  5. Display the converted letter<br/>
  
  ## 3. Pseudo code
  Step 1: start<br/>
  Step 2: read the letter<br/>
  Step 3: Check if the input is capital or small letter <br/>
  Step 4: If it is neither print an error message <br/>
  Step 5: convert the letter to its opposite case<br/>
  Step 6: print the converted letter<br/>
  Step 7: stop<br/>

## 4. Design the program

#### 4.1 Variable declaration and initialization (What and How?)
  char letter;<br/>
#### 4.2 Reading input data (How?)
  cout << "Please enter a letter: ";<br/>
  cin >> letter;<br/>
    
 #### 4.3 Perform operation - (How?)
  1. Check if the letter is upper or lower case<br/>
    if (isupper(letter)){<br/>
    letter = tolower(letter);<br/>
    }<br/>
#### 4.4 Check if the letter is capital 
  else if (islower(letter)){<br/>
    letter = toupper(letter);<br/>
    cout << "Your letter in upper case is: " << letter ;<br/>
    }<br/>
#### 4.5 If not both print an error message
  else {<br/>
  cout << "Invalid input";<br/>
  }
#### 4.6 Print result (letter). (How?)
  cout << "Your letter in upper case is: " << letter ;<br/>
  ## 5. FLowchart
  ![Flowchart](https://github.com/mikiyasmechalo/Codify/blob/main/ETS0944_15_Mikiyas_Mechalo/Imges/1/Screenshot%202023-11-17%20233838.png)
