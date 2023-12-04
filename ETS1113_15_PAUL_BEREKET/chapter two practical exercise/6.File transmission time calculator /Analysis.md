                Problem description  

A serial transmission line can transmit 960 characters a second. Write a program 
that will calculate how long it will take to send a file, given the file size. Test your 
program on a 400MB (419,430,400 byte) file which may take days.  
 

               Problem analysis 

Input: file size in bytes. 

Output: required time to transmit the data  

Process:  

 Variable declaration- declaring sizeInByte, transmissionRate, transsmisionRate, timeInSecond,minute,hour 


 Initializing the transmissionRate to 960 

Ask the user to input the file size in byte. 

Take the size in byte as an input. 

Calculate the time required  to transmit the data. 

Print the required time as output. 

              Design 

Variable declaration:  

int sizeInByte, transsmisionRate, timeInSecond,minute,hour 

Reading input data:  

cout<< “ Enter the file size in byte” << endl: 

cin>> sizeInByte 

Perform the operation: 

timeInSeconds = sizeInByte / transmissionRate; 

     hours = the floor value of timeInSeconds/3600 

     minutes = (the remainder of timeInSecond/3600 ) / 60; 

     seconds = the remainder of timeInSeconds / 60; 

             Print the result: 

    cout << "It will take " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds to send the file." << endl; 

 

              Pseudo code  

Step 1. Start 

Step 2. Input data size (in bits) 

Step 3. Calculate time required to transmit data: time = data size / transmission rate 
 
 step 4 . Display the time required to transmit the data  

 Step 5. End 
     
      flowchart

![flowchart](https://github.com/SWEG-2015EC-Batch/Codify/blob/main/ETS1113_15_PAUL_BEREKET/chapter%20two%20practical%20exercise/flowchart/file%20transmission%20time%20calculator/file%20transmission%20time%20calculator.png)
 
 
