Problem analysis for calculating BMI

Input: height, weight and gender

Output: Body mass index (BMI)

Operation: - specify gender type
        
           - read height, weight 
          -  calculate body mass index as BMI BMI=w/h*h based on the gender catagory
          - display BMI

pseudo code:
step 1, start
step 2. read gender
step 3, calculate BMI based on gender catagory:
      if gender == male:
               if is b/n BMI < 20.5 display its under weight
                else if b/n BMI>= 20.5 & BMI <= 25.9 display its normal weight
                else if BMI >= 26 & BMI < 29.9 its over weight
                 else you are obessed
      if gender== female:
                if BMI < 18.5 display its under weight
                else if BMI >= 18.5 && BMI <= 24.9 display its normal weight
                else if is b/n BMI >= 25 && BMI < 29.9 display its over weight"<<endl;
                else if BMI >= 30 you are obsseed
step 4, end
