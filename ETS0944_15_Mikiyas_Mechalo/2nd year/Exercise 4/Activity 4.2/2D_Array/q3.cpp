#include <iostream>

using namespace std;

int main(){

    // float result [3][5];
    float result [3][5] = {{15,10,5,20,50},{10,5,0,15,45},{5,0,0,10,40}};
    float sum [3];
    string status[] = {" Excellent", " Very Good", " Fair", " Poor", " Fail"};

    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 5; j++){
    //         switch (j)
    //         {
    //         case 0:
    //             cout << "Enter student #" << i+1 << " test(15%) result: ";
    //             cin >> result [i][j];
    //             break;
    //         case 1:
    //             cout << "Enter student #" << i+1 << " assignment(10%) result: ";
    //             cin >> result [i][j];
    //             break;
    //         case 2:
    //             cout << "Enter student #" << i+1 << " quiz(5%) result: ";
    //             cin >> result [i][j];
    //             break;
    //         case 3:
    //             cout << "Enter student #" << i+1 << " project(20%) result: ";
    //             cin >> result [i][j];
    //             break;
    //         case 4:
    //             cout << "Enter student #" << i+1 << " fnal(50%) exam result: ";
    //             cin >> result [i][j];
    //             break;
    //         default:
    //             break;
    //         }
    //     }
    // }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            sum [i] += result[i][j];
        }
    }
    
    cout << "Results:\n";

    for (int i =0; i < 3; i++){
        cout << "Student #" << i+1 << '\t';
        if (sum[i] >= 80){
            cout << sum[i] << "\t" << status[0] << '\n';
        }
        else if (sum[i] >= 60){
            cout << sum[i] << "\t" << status[1] << '\n';
        }
        else if (sum[i] >= 50){
            cout << sum[i] << "\t" << status[2] << '\n';
        }
        else if (sum[i] >= 40){
            cout << sum[i] << "\t" << status[3] << '\n';
        }else{ 
            cout << sum[i] << '\t' << status[4] << '\n';
        }
    }
 


    return 0;
    
}
