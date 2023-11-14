# Analysis for calculating gross-salary, net salary and bonus payment

  ## 1. Problem Description: 
Design an algorithm and write a code to read an employee name, weekly working hours, <br/>
bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%, tax: 15%).


  ## 2. Analysis
Input: employee name, weekly working hours,bonus rate per hour, base salary <br/>
Output: gross-salary, net salary and bonus payment <br/>
Process: <br/>
          &nbsp;1. Variable declaration: empName, workHrs, bonusRt, baseS, pensionRate(0.05), tax(0.15) <br/>
          &nbsp;2. Prompt the user to enter employee name, weekly working hours,bonus rate per hour, base salary (x and y)<br/>
          &nbsp;3. Accept the user input.<br/>
          &nbsp;4. Calculate gross salary as base salary + (bonus rate * working hours * 4)<br/>
          &nbsp;5. Calculate net salary as gross salary - gross salary(pension Rate) - gross salary(tax rate) <br/>
          &nbsp;6. Calculate bonus payment as bonus rate * working hours<br/>
          &nbsp;7. Display the employee name with his/her gross salary, net salary and  bonus payment.
## 3. Design the program

#### 3.1 Variable declaration and initialization (What and How?)
&nbsp;int workHr, baseS, bonusRt, grossS, bonusP; <br/>
&nbsp;double netS, pensionRate(0.05), taxRate(0.15); <br/>
#### 3.2 Reading input data (How)
&nbsp;cout << "Please enter your full name: ";<br/>
&nbsp;getline (cin, empName);<br/>
&nbsp;cout << "Please enter the amout of hours you've worked: ";<br/>
&nbsp;cin >> workHr;<br/>
&nbsp;cout << "Please enter your base salary: ";<br/>
&nbsp;cin >> baseS;<br/>
&nbsp;cout << "Please enter your bonus rate per hour: ";<br/>
&nbsp;cin >> bonusRt;<br/>
 
 #### 3.3 Perform operation - (How?)
&nbsp; grossS = baseS + (workHr * bonusRt * 4); //we multiply by 4 because the work hour is in weeks<br/>
&nbsp; netS = grossS - (grossS * pensionRate) - (grossS * taxRate);<br/>
&nbsp; bonusP = bonusRt * workHr * 4;<br/>
#### 3.4 Print results. (How?)
&nbsp; cout << "Dear " << empName << '\n';<br/>
&nbsp;cout << "Your gross salary for this month is: " << grossS << '\n';<br/>
&nbsp;cout << "Your net salary for this month is: " << netS << '\n';<br/>
&nbsp;cout << "Your bonus payment for the month is: " << bonusP <<'\n';<br/>
