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
  Step 3: convert the letter to its opposite case<br/>
  Step 5: print the converted letter<br/>
  Step 6: stop<br/>

## 3. Design the program

#### 3.1 Variable declaration and initialization (What and How?)
&nbsp;char letter;<br/>
#### 3.2 Reading input data (How?)
&nbsp;cout << "Please enter a letter: ";<br/>
 &nbsp;   cin >> letter;<br/>
    
 #### 3.3 Perform operation - (How?)
&nbsp; 1. Check if the letter is upper or lower case<br/>
&nbsp;if (isupper(letter)){<br/>
   &nbsp;     letter = tolower(letter);<br/>
   &nbsp; }<br/>
#### 3.4 Check if the letter is capital 
&nbsp;else if (islower(letter)){<br/>
  &nbsp;      letter = toupper(letter);<br/>
  &nbsp;      cout << "Your letter in upper case is: " << letter ;<br/>
 &nbsp;   }<br/>
#### 3.5 If not both print an error message
&nbsp;else {<br/>
   &nbsp;     cout << "Invalid input";<br/>
    &nbsp;}
#### 3.6 Print result (letter). (How?)
&nbsp;cout << "Your letter in upper case is: " << letter ;<br/>
