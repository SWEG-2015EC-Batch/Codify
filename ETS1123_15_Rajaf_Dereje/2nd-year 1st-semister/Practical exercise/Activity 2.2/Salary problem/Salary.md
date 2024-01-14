Analysis:
inpust: employee name, weekly working hour, bonus rate, base salary
output:gross salary, net salary, bonus payment 
operation: gross salary = base salary + (weekly working hour* bonus rate*4)
          net salary = gross salary - (gross salary*0.05)-(gross salary*0.15)
          bonus payment = weekly working hour*bonus rate*4


Algorithm desig(psudocode)
step 1:start 
step 2:read employee name, weekly work hour, bonus rate, base salary
step 3:compute  gross salary = base salary + (weekly working hour* bonus rate*4)
          net salary = gross salary - (gross salary*0.05)-(gross salary*0.15)
          bonus payment = weekly working hour*bonus rate*4

step 4:print gross salary, net salary, bonus payment 
step 5:end 


Algorithm ini flowchart 

#Flowchart
```mermaid
flowchart TD;
A([start]) --> B[/enter your name/];
B --> C[/enter your weekly working hour/];
C --> D[/enter your bonus rate/];
D --> E[/base salary/];
E--> F["compute gross_s=base_s + (work_hr*bonus_rt*4)"];
F --> G["compute net_s=gross_s - (gross_s*0.05) - (gross_s*0.15)"];
G --> H["compute bonus payment= work_hr*bonus_rt*4"];
H --> I[/print gross_s, net_s, bonus payment/];
I --> J([end]);
```
