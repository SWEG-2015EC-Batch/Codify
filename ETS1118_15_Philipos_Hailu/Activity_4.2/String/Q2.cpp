#include <iostream>

using namespace std;
int main(){

    string word;
    int n, count = 0;

    cout<<"Enter a word: ";
    cin>>word;

    n = word.size();

    for (int i = 0; i <= n/2; i++){

        if(word[i] != word[n-i-1]){

            count++;

        }

    }
    
    if(count != 0){

        cout<<"It is Not a palindrome"<<endl;

    }else{

        cout<<"It is a palindrome"<<endl;

    }
    
    return 0;

}
