/*
This program reads book title author and price and returns the pricest
*/
#include <iostream>
using namespace std;

struct Book{
    string title, author;
    float price;
};

void read(Book [], int);
Book find(Book [], int);

int main(){
    
    int num;

    cout<<"How many books will you record: ";
    cin>>num;

    Book info[num];
    Book max;

    read(info , num);

    max = find(info, num);
    cout<<"The book with the highes price\n";
    cout<<"Title: "<<max.title;
    cout<<"\nAuthor: "<<max.author;
    cout<<"\nPrice: "<<max.price;

    return 0;
}

void read(Book Binfo[], int freq){
    for(int i = 0 ; i < freq; i++){
        //to ignore '\n' from the last input
        cin.ignore();

        cout<<"Title "<<i + 1<<" : ";
        getline(cin,Binfo[i].title);
        cout<<"Author : ";
        getline(cin,Binfo[i].author);
        cout<<"Price : ";
        cin>>Binfo[i].price;

        cout<<endl; // for readability
    }
}

Book find(Book bfind[], int num){

    int maximum = bfind[0].price; //to hold the maximum price
    int index; // to save the index of the maximum price array member

    int i = 1;
    for(; i < num; i++){
        if(maximum < bfind[i].price){
            maximum = bfind[i].price;
            index = i;
        }
    }

    return bfind[index];
}
