              Problem description   

Write a program that prompts the capacity in gallons of an automobile fuel tank  
and the miles per gallons the automobiles can be driven. The program outputs  
the number of miles the automobile can be driven without refueling.   
   

             Problem analysis 

Input: Capacity in gallons of an automobile fuel tank  
and the miles per gallon the automobiles can be driven. 

Output: The number of miles the automobile can be driven without refueling.    
     

Process:  

 Variable declaration- capacity, miles_per_galon, fuel_economy 

No Initialization  

Ask the userthe capacity in gallons and the miles the car can travel per gallon. 

Take those data  as an input. 

Calculate the number of miles the automobile can be driven without refueling.   

Print the number of miles as an output. 

                  Design 

Variable declaration:  

float capacity, miles_per_galon, fuel_economy; 

Reading input data:  

cout <<"what is the fuel tank's capacity in gallon?: " ; 

 cin>> capacity; 

 cout<<" how many miles can this car travel per gallon?: " ;    

cin>> miles_per_galon ; 

Perform the operation: 

 fuel_economy = capacity*miles_per_galon ; 

  Print the result: 

    cout<< " you can travel " << fuel_economy << "miles without refuling." << endl; 

 

           Pseudo code  

Step 1. Start  

Step 2. Input car fuel capacity (in gallons) 

 Step 3. Input miles per gallon (MPG)  

Step 4. Calculate fuel economy: fuel economy = fuel capacity * miles per gallon 

Step 5. Display the maximum distance the car can travel without refueling (fuel capacity). 

Step 6. End 

     Flowchart 
https://github.com/SWEG-2015EC-Batch/Codify/blob/main/ETS1113_15_PAUL_BEREKET/chapter%20two%20practical%20exercise/flowchart/fuel%20economy/fule%20economy.png
