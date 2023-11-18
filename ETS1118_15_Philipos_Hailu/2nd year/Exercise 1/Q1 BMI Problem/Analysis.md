Analysis 

Input:- height, weight
Output:- BMI
Process:- BMI = weight/ ( height * height )

Algorithm in Pseudocode

Step1; start
Step2; read height and weight
Step3; comput BMI = weight/ ( height * height )
Step4; print BMI
Step5; end

#Flowchart

*** mermaid


flowchart TD;

A([Start]) --> B[/Enter your weight in kilograms/];

B --> C[/Enter your height in meters/];

C --> D["BMI = body_weight / (height * height)"];

D--> E[/Print 'Your BMI is' BMI/];

E --> F([End]);


