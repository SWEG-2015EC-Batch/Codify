Group Project 2 Pseudo code
1. Start
2. Declare constants: capacity, firstClassCapacity, economyCapacity
3. Declare variables: name, sexes, seats, age, passports, economyPassengers, firstClassPassengers, transferred, choice
4. Display welcome message
5. i=0
6. Is i<capacity? If yes continue else goto step 12
7. Prompt user to choose between first class or economy
8. Read in user's choice
9. If user's choice is 1 or is transferred  
   i. Check If a seat is not taken
   ii. if a seat is not taken
      a. Set foundSeats to true
      b. Set the seat to taken
   iii. If a seat is found
      a. Prompt user to input personal details
      b. Read in name, sex, age, and passport number
      c. Display boarding pass with seat number and class
      d. i++
      e. Goto step 6
   iv. If all first class seats are taken
      a. Prompt user if they want to be transferred to economy
      b. If user chooses yes
         *  Mark as transferred and Goto step 10 
      c. If user chooses no
         * Print “The next flight leaves in 3 Hours”
         * i--;
         * Go to step 6
10. If user's choice is 2 or is transferred
   i. Check If a seat is not taken
   ii. if a seat is not taken
      a. Set foundSeats to true
      b. Set the seat to taken
   iii. If a seat is found
      a. Prompt user to input personal details
      b. Read in name, sex, age, and passport number
      c. Display boarding pass with seat number and class
      d. i++
      e. Goto step 6
   iv. If all first class seats are taken
      a. Prompt user if they want to be transferred to first class
      b. If user chooses yes
         * Mark as transferred and Goto step 9 
      c. If user chooses no
         * Print “The next flight leaves in 3 Hours”
         * i --;
         * Go to step 6
11. If user inputs an invalid choice
   a. Print “Invalid Input” and go to step 5
12. End
