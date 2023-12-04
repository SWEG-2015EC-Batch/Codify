                Problem description   
 

Write a program that converts a letter entered from the keyboard to its uppercase 
or lower case equivalent . 
  
   

                Problem analysis 

Input: A letter entered from the keyboard   

Output: Uppercase or lowercase equivalent of the letter from the keyboard.    
     

Process:  

 Variable declaration- letter.  

No Initialization  

Prompt the user to enter a letter. 

Read the letter. 

Decide if the input is in uppercase, lowercase or not a letter. 

If the letter is uppercase, then change it into its lowercase equivalent.  

Print the lowercase letter. 

If the letter is lowercase letter, then change it into its uppercase equivalent. 

Print the uppercase letter. 

If the input is neither upper case nor lowercase , then print invalid input. 

           Design 

Variable declaration:  

char letter; 

Reading input data:  

cout << "please enter a letter:  "; 

cin >> letter; 

 

Process the letter and display the result : 

if (isupper(letter)){ 

        letter = tolower(letter); 

        cout << "Your letter in upper case is: " << letter ; 
 } 

    else if (islower(letter)){ 

        letter = toupper(letter); 

        cout << "Your letter in upper case is: " << letter ; 
 } 

    else { 

        cout << "Invalid input"; 

   

                Pseudo code  

Step 1. Start  

Step 2. Prompt the user to input a letter from the keyboard 

Step 3. Read the input. 

Step 4. If the letter is in uppercase, convert it to lowercase and display the converted letter  

Step 5. If the letter is in lowercase, convert it to uppercase and display the converted letter  

Step 6. If the letter is neither uppercase nor lowercase, print invalid input. 

Step 7. End 
  
 flowchart 

![flowchart](https://github.com/SWEG-2015EC-Batch/Codify/blob/main/ETS1113_15_PAUL_BEREKET/chapter%20two%20practical%20exercise/flowchart/case%20converter/Screenshot%202023-11-18%20112538.png)