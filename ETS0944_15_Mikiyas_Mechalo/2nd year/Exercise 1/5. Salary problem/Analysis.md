# Analysis for calculating gross-salary, net salary and bonus payment

  ## 1. Problem Description: 
Design an algorithm and write a code to read an employee name, weekly working hours, <br/>
bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment. <br/>
(Hint: pension rate – 5%, tax: 15%).


  ## 2. Analysis
Input: employee name, weekly working hours,bonus rate per hour, base salary <br/>
Output: gross-salary, net salary and bonus payment <br/>
Process: <br/>
  1. Variable declaration: empName, workHrs, bonusRt, baseS, pensionRate(0.05), tax(0.15) <br/>
  2. Prompt the user to enter employee name, weekly working hours,bonus rate per hour, base salary (x and y)<br/>
  3. Accept the user input.<br/>
  4. Calculate gross salary as base salary + (bonus rate * working hours * 4)<br/>
  5. Calculate net salary as gross salary - gross salary(pension Rate) - gross salary(tax rate) <br/>
  6. Calculate bonus payment as bonus rate * working hours<br/>
  7. Display the employee name with his/her gross salary, net salary and  bonus payment.

  ## 3. Pseudo code
  Step 1: start<br/>
  Step 2: read employee name <br/>
  Step 4: read working hours <br/>
  Step 5: read bonus rate <br/>
  Step 6: read base salary  <br/>
  Step 7: calculate gross salary = base salary + (bonus rate * working hours * 4) <br/>
  Step 8: calculate net salary = gross salary - gross salary(pension Rate) - gross salary(tax rate) <br/>
  Step 9: calculate bonus payment = bonus rate * working hours<br/>
  Step 5: print employee name ,gross salary, net salary, bonus payment<br/>
  Step 6: stop<br/>
  
## 4. Design the program

#### 4.1 Variable declaration and initialization (What and How?)
  int workHr, baseS, bonusRt, grossS, bonusP; <br/>
  double netS, pensionRate(0.05), taxRate(0.15); <br/>
#### 4.2 Reading input data (How)
  cout << "Please enter your full name: ";<br/>
  getline (cin, empName);<br/>
  cout << "Please enter the amout of hours you've worked: ";<br/>
  cin >> workHr;<br/>
  cout << "Please enter your base salary: ";<br/>
  cin >> baseS;<br/>
  cout << "Please enter your bonus rate per hour: ";<br/>
  cin >> bonusRt;<br/>
 
 #### 4.3 Perform operation - (How?)
  grossS = baseS + (workHr * bonusRt * 4); //we multiply by 4 because the work hour is in weeks<br/>
  netS = grossS - (grossS * pensionRate) - (grossS * taxRate);<br/>
  bonusP = bonusRt * workHr * 4;<br/>
#### 4.4 Print results. (How?)
  cout << "Dear " << empName << '\n';<br/>
  cout << "Your gross salary for this month is: " << grossS << '\n';<br/>
  cout << "Your net salary for this month is: " << netS << '\n';<br/>
  cout << "Your bonus payment for the month is: " << bonusP <<'\n';<br/>
  ## 5. Flowcahrt
  ![flowchart](https://github.com/mikiyasmechalo/Codify/blob/main/ETS0944_15_Mikiyas_Mechalo/Imges/1/Screenshot%202023-11-17%20235159.png)
