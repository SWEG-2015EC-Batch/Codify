# Analysis for calculating the time it takes to send a file through a serial transmition line

  ## 1. Problem Description: 
Write a C++ program that will calculate how long it will take to send a file, given the file size. <br/>
The serial transmission line can transmit 960 characters a second.

  ## 2. Analysis
Input: file size in byte<br/>
Output: The time it takes to send the file<br/>
Process: <br/>
          &nbsp;1. Variable declaration: timeInSec, timeInMinute, timeInHr, sizeInByte<br/>
          &nbsp;2. Prompt the user to enter the file size<br/>
          &nbsp;3. Accept the user input.<br/>
          &nbsp;4. Calculate the time it takes using the formula timeInSec = sizeInByte / 960 <br/>
          &nbsp;5. Display the answer
## 3. Design the program

#### 3.1 Variable declaration and initialization (What and How?)
&nbsp;double timeInSec, timeInMinute, timeInHr, sizeInByte;<br/>
#### 3.2 Reading input data (How?)
&nbsp;cout << "Input the file size in bytes: ";
&nbsp;cin >> sizeInByte;<br/>
 #### 3.3 Perform operation - (How?)
&nbsp; timeInSec = sizeInByte / 960; //960 characters = 960 bytes
&nbsp;timeInMinute = timeInSec / 60;
&nbsp;timeInHr = timeInMinute / 60;
#### 3.4 Print result (time). (How?)
&nbsp; cout << "Time needed in seconds is: " << timeInSec << '\n';<br/>
&nbsp;cout << "Time needed in Minutes is: " << timeInMinute << '\n';<br/>
&nbsp;cout << "Time needed in Hours is: " << timeInHr;<br/>
