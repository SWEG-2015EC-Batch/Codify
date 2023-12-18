/* this programe will calculate the user BODYMASS index based on the user
 gender catagory and give an output that is  the persons BMI level */



#include<iostream>
#include<cmath>
#include<ctype.h>
using namespace std;

// this programe calculate BMI by taking height and weight

int main()
{
    char gender;
    double weight, height, BMI;

    int n;
    for(int i =0; i<n; i++){
        cout<<"BMI for person: "<<i + 1<<'\n';
        cout<<"Enter your gender: ";
    cin>> gender;
    gender = toupper(gender);
    cout << gender;

    
    cout<<endl<<"Enter your weigt in kg: ";
    cin>> weight;
    cout<<"Enter your height in meter: ";
    cin>> height;

          if(gender == 'M'){
        cout<<"your gender is male: "<<endl;
    }
    else if(gender == 'F'){
        cout<<"your gener is female"<<endl;
    }
    else
    {
        cout<<" invalid input for gender: "<<endl;
    }


        BMI = weight/pow(height, 2);
        if(gender == 'F'){
            
            cout << gender;
            cout<<"Your BMI is: "<< BMI<<endl;

                    if (BMI < 18.5)
                    {
                    cout<<"its under weight"<<endl;
                    }
                    else if( BMI >= 18.5 && BMI <= 24.9)
                    {
                        cout<<"its normal weight"<<endl;
                    }
                    else if(BMI >= 25 && BMI < 29.9){
                        cout<<"its over weight"<<endl;
                    }
                    else if(BMI >= 30){
                        cout<<"you are obsseed";
                    }
            }
            else if(gender == 'M'){
                
            cout<<"\n Your BMI is: "<< BMI<<endl;

                    if (BMI < 20.5)
                    {
                    cout<<"its under weight"<<endl;
                    }
                    else if( BMI>= 20.5 & BMI <= 25.9){
                        cout<<"its normal weight"<<endl;
                    }
                    else if(BMI >= 26 & BMI < 29.9){
                        cout<<"its over weight"<<endl;
                    }
                    else{
                        cout<<"you are obessed";
                    }
            } 
        }

    
    return 0;

}

    
