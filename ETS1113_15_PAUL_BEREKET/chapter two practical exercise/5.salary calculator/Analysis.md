            Problem description   
 

Design an algorithm and write a to read an employee name weekly working 
hours, bonus rate per hour and base salary and find the employees gross-salary, 
net salary and bonus payment. (Hint: pension rate – 5%, tax: 15%).  
 

           Problem analysis 

Input: employee name, weekly working hours, bonus rate per hour and base salary. 

Output: employees' gross salary, net salary and bonus payment. 
     

Process:  

     1. Variable declaration: empName, workHrs, bonusRt, baseS, pensionRate(0.05), tax(0.15) 

 2. Prompt the user to enter employee name, weekly working hours,bonus rate per hour, base salary     (x and y) 

 3. Accept the user input. 
 
 4. Calculate gross salary as base salary + (bonus rate * working hours * 4) 
 
 5. Calculate net salary as gross salary - gross salary(pension Rate) - gross salary(tax rate) 

 6. Calculate bonus payment as bonus rate * working hours 
 
 7. Display the employee name with his/her gross salary, net salary and bonus payment. 

              Design 

Reading input data:  

cout << "Enter employee's full name: "; 

 cin >> employee_name; 

cout << "Enter weekly working hours: "; 

    cin >> weekly_working_hours; 

    cout << "Enter bonus rate per hour: "; 

    cin >> bonus_rate_per_hour; 

    cout << "Enter base salary: "; 

    cin >> base_salary; 

 

 

Perform the opertation: 

gross_salary = weekly_working_hours * base_salary;    

Display results: 

   cout << "Employee Name: " << employee_name << endl; 

    cout << "Gross Salary: " << gross_salary << endl; 

    cout << "Bonus Payment: " << bonus_payment << endl; 

    cout << "Pension Deduction: " << pension_deduction << endl; 

    cout << "Tax Deduction: " << tax_deduction << endl; 

    cout << "Net Salary: " << net_salary << endl; 

  

            Pseudo code  

Step 1. start 

Step 2: Prompt the user to input the employee's name 

Step 3: Read and store the employee's name 

  

Step 4: Prompt the user to input the weekly working hours 

Step 5: Read and store the weekly working hours 

  

Step 6: Prompt the user to input the bonus rate per hour 

Step 7: Read and store the bonus rate per hour 

  

Step 8. Prompt the user to input the base salary 

Step 9. Read and store the base salary 

  

Step 10. Calculate the gross salary by multiplying the weekly working hours by the sum of the base salary and the bonus rate per hour 

Step 11. Calculate the pension deduction by multiplying the gross salary by 5% (0.05) 

Step 12. Calculate the tax deduction by multiplying the gross salary by 15% (0.15) 

Step 13. Calculate the net salary by subtracting the pension deduction and tax deduction from the gross salary 

Step 14. Calculate the bonus payment by multiplying the bonus rate per hour by the weekly working hours 

Step 15. Display the gross salary, net salary, and bonus payment to the user 

Step 16. end

                       Flowchart
        ETS1113_15_PAUL_BEREKET/chapter two practical exercise/flowchart/salary calculator/salary calculator flow chart.png               
