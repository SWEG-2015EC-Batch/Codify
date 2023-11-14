# Analysis for Possible distance without refueling

  ## 1. Problem Description: 
Write a C++ program that converts a letter entered from the keyboard to its uppercase or lowercase equivalent.

  ## 2. Analysis
Input: a letter
Output: uppercase or lowercase version of the letter
Process: 
          &nbsp;1. Variable declaration: letter
          &nbsp;2. Prompt the user to enter a letter
          &nbsp;3. Accept the user input.
          &nbsp;4. Check if the accepted letter is capital or small and convert it to its counterpart
          &nbsp;5. Display the converted letter
      ## 3. Design the program
3.1 Variable declaration and initialization (What and How?)
	&nbsp;char letter;
3.2 Reading input data (How?)
	&nbsp;cout << "Please enter a letter: ";
         &nbsp;   cin >> letter;
            
3.3 Perform operation - (How?)
	&nbsp;1. Check if the letter is upper or lower case
	&nbsp;if (isupper(letter)){
   &nbsp;     letter = tolower(letter);
   &nbsp; }
2. Check if the letter is capital 
&nbsp;else if (islower(letter)){
  &nbsp;      letter = toupper(letter);
  &nbsp;      cout << "Your letter in upper case is: " << letter ;
 &nbsp;   }
3. If not both print an error message
&nbsp;else {
   &nbsp;     cout << "Invalid input";
    &nbsp;}
3.5 Print result (letter). (How?)
	&nbsp;cout << "Your letter in upper case is: " << letter ;
