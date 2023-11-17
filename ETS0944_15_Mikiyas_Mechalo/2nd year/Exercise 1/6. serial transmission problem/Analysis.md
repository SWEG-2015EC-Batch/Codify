# Analysis for calculating the time it takes to send a file through a serial transmition line

  ## 1. Problem Description: 
Write a C++ program that will calculate how long it will take to send a file, given the file size. <br/>
The serial transmission line can transmit 960 characters a second.

  ## 2. Analysis
Input: file size in byte<br/>
Output: The time it takes to send the file<br/>
Process: <br/>
  1. Variable declaration: timeInSec, timeInMinute, timeInHr, sizeInByte<br/>
  2. Prompt the user to enter the file size<br/>
  3. Accept the user input.<br/>
  4. Calculate the time it takes using the formula timeInSec = sizeInByte / 960 <br/>
  5. Display the answer

## 3. Pseudo code 
  Step 1: start <br/>
  Step 2: read the file size <br/>
  Step 3: compute the time it takes in seconds <br/>
    timeInSec = sizeInByte / 960 <br/>
  Step 5: print the time in seconds <br/>
  Step 6: stop <br/>

## 4. Design the program

#### 4.1 Variable declaration and initialization (What and How?)
  double timeInSec, timeInMinute, timeInHr, sizeInByte;<br/>
#### 4.2 Reading input data (How?)
  cout << "Input the file size in bytes: ";<br/>
  cin >> sizeInByte;<br/>
 #### 4.3 Perform operation - (How?)
  timeInSec = sizeInByte / 960; //960 characters = 960 bytes<br/>
  timeInMinute = timeInSec / 60;<br/>
  timeInHr = timeInMinute / 60;<br/>
#### 4.4 Print result (time). (How?)
  cout << "Time needed in seconds is: " << timeInSec << '\n';<br/>
  cout << "Time needed in Minutes is: " << timeInMinute << '\n';<br/>
  cout << "Time needed in Hours is: " << timeInHr;<br/>

  ## 5. Flowchart
  ![flowchart](https://github.com/mikiyasmechalo/Codify/blob/main/ETS0944_15_Mikiyas_Mechalo/Imges/1/Screenshot%202023-11-17%20235546.png)
