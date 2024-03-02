//This program generates patterns
//May 02,2024

#include <iostream>
#include <limits>
using namespace std;
int main() {

    cout<<"\nA) Full square\n"
        <<"B) Hollow square\n"
        <<"C) Half pyramid\n"
        <<"D) Inverted half pyramid\n"
        <<"E) Hollow inverted half pyramid\n"
        <<"F) Full pyramid\n"
        <<"G) Hollow full pyramid\n"
        <<"H) Inverted full pyramid\n"
        <<"X) Exit the program\n";

    int row,colom;
    char chooice;
    do{
        cout<< "\nYour chooioce: ";
        cin>>chooice;
        chooice = tolower(chooice); //to simplify case labels

        int chance; //chances incase invalid data type input is made
        chance = 3;

       if(chooice != 'x'){
          cout<< "\nEnter dimention\n";
          cout<<"Row: ";
          cin>>row;
         while(cin.fail() && chance > 0){
                cin.clear(); //to clear error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //to clear keybord buffer
                cout<<"Incorrect datatype input! try again "<<--chance + 1<<" chances left\n";                            //prompt the user to input correct datatype input
                cout<<"Row: ";
                cin>>row;
                if(cin.fail()==0){
                    chance += 1;
                }
            }
         if(chance == 0){
            cout<< "you've used all your chances please start over";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
         }
        }
         switch(chooice){
         case 'a':
         //Full square.
            cout<<"Colom: ";
            cin>>colom;
          while(cin.fail() && chance > 0){
                cin.clear(); //to clear error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //to clear keybord buffer
                cout<<"Incorrect datatype input! try again "<<--chance + 1<<" chances left\n";                            //prompt the user to input correct datatype input
                cout<<"Colom: ";
                cin>>colom;
                if(cin.fail()==0){
                    chance += 1;
                }
            }
         if(chance == 0){
            cout<< "you've used all your chances please start over";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
         }

            cout<<endl;
            for(int i = 1; i <= row; i++){
                for(int j = 1; j <= colom; j++){
                    cout<<"* ";                                      //outer loop for row and inner loop for colomon
                }
                cout<<endl;
            }
            break;

         case 'b':
         //Hollow square.
            cout<<"Colom: ";
            cin>>colom;
          while(cin.fail() && chance > 0){
                cin.clear(); //to clear error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //to clear keybord buffer
                cout<<"Incorrect datatype input! try again "<<--chance + 1<<" chances left\n";                            //prompt the user to input correct datatype input
                cout<<"Colom: ";
                cin>>colom;
                if(cin.fail()==0){
                    chance += 1;
                }
            }
         if(chance == 0){
            cout<< "you've used all your chances please start over";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
         }

            cout<<endl;
            for(int i = 1; i <= row; i++){
                for(int j = 1; j <= colom; j++){
                   if(i == 1 || i == row || j == 1 || j == colom)
                         cout<<"* ";
                   else
                        cout<<"  ";
                }
                cout<<endl;
            }

            break;

         case 'c':
         //Half pyramid.
            cout<<endl;
            for(int i = 1; i <= row; i++){
             for(int j = 1; j <= i; j++){
                 cout<<"* ";
                    
                }
                cout<<endl;
            }

            break;

         case 'd':
         // Inverted half pyramid.
            cout<<endl;
            for(int i = 1; i <= row; i++){
                for(int j = i; j <= row; j++){
                    cout<<"* ";
                }
                cout<<endl;
            }

            break;

         case 'e':
         //Hollow inverted half pyramid.
            cout<<endl;
            for(int i = 1; i <= row; i++){
                for(int j = i; j <= row; j++){
                   if(i == 1 || j == i || j == row){
                     cout<<"* ";
                   }else{
                     cout<<"  ";
                   }
                }
                cout<<endl;
            }

            break;  

          case 'f':
         //Full pyramid.
            cout<<endl;
            for(int i = 1; i <= row; i++){
             for(int j = 1; j <= row - i; j++){
              cout<<" ";
             }
             for(int j = 1; j <= i; j++){
               cout<<"* ";
             }
                cout<<endl;
            }

            break;

          case 'g':
         //Hollow full pyramid.
            cout<<endl;
            for(int i = 1; i <= row; i++){
             for(int j = 1; j <= row - i; j++){
              cout<<" ";
             }
             for(int j = 1; j <= i; j++){
               if(i == row || j == 1 ||  j == i){
                cout<<"* ";
               }else{
                cout<<"  ";
               }
             }
                cout<<endl;
            }
            break;

         case 'h':
         // Inverted full pyramid.
            cout<<endl;
            for(int i = 1; i <= row; i++){

                for(int s = 1; s <= i - 1; s++){  //for spacing
                    cout<<" ";                          
                }
                for(int j = i; j <= row; j++){
                    cout<<"* ";
                }
                cout<<endl;
            }

            break;
         case 'x':
            cout<<"You've sucessfully exited the program, Thankyou for your time\n";
            break;

         default :
            cout<<"\nInvalid chooice input!(only choose characters from A-H, a-h and x for exit)\n";

        }

    }while(chooice != 'x');

    return 0;
}
