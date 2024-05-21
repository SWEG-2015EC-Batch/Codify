/*
    project title: Salse traker system

    project discription: 
    A company has four salespeople (1 to 4) who sell five different products (1 to 5). 
    Once a day, Each salesperson passes in a slip for each different type of product sold.
    Each slip contains (a) the Salesperson numbers, (b) the product numbers, (c) the total Birr value of that product sold that Day.
    The company needs a program that efficiently record this daily information, generate a Summary of the total sale by each salesperson
    per product at the end the month. Each salesperson Passes in between 0 and 5 sales slips per day.
    At the end of every month, the program prints the Results in tabular format with each of the columns representing a particular
    salesperson and each Of the rows representing a particular product.The output should include the 
    total sales per Salesperson (cross total of the column) and total sales for each product (cross total of the row)
    to the bottom of the totaled columns and to the right of the totaled rows respectively.
    Also, the Company wants the program to calculate the bonus payment each salesperson receives at the end Of the month and print 
    it at the bottom of the column. The company pays a 5% bonus to each of Its salespeople based on the number of sales he/she made
    during the previous month. Using the Information given here write an application to solve the problem of the company.
    Also, the Program allows to search for particular product or salesperson record.

    what does the program do ?
     * Collect Daily Sales Data
     * Summarize Monthly Sales
     * Calculate Totals and Bonuses
     * Print the Results in a Table
     * Search Functionality
     
    Section C team members:
     1, Kidist Alemayew     ETS 0771/15
     2, Mikiyas Mechalo     ETS 1144/15
     3, Paul Bereket        ETS 1113/15
     4, Philipos Hailu      ETS 1117/15
     5, Rajaf Dereje        Ets 1123/15
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct s_data{
    int salse_person;
    int product_sold;
    double amount;
};

const int employee = 4; // number of salses person
int product_number = 5; // number of product sold

void input_data(s_data [] , int &);
void write_to_file(s_data[], int );
void read_from_file(s_data [], int &);
void report(s_data [], int);
void search(s_data [], int);

int main(){

    s_data sales[100]; // assuming 100 is the max entries per month. (it can be changed if neccessary)
    int daily_entries(0); // number of daily entries of all salse persons combined

    while(true){
        cout<<endl<<"Menu:\n";
        cout<<"1. Input the daly sales data\n";
        cout<<"2. Generate monthly sales report\n";
        cout<<"3. search for product or salesperson record\n";
        cout<<"4. Exit the program\n";
        cout<<"Enter your chooice: ";
        
        char chooice;
        cin >> chooice;

        // to handlie invalid data type input
        while(cin.fail()){
            cin.clear();

            cout << "Error handling input data\n";
            cout << "please enter a character 1 - 4 \n";
            cout << "Enter chooice: ";
            cin.ignore();

            cin >> chooice;
        }
        
        switch (chooice){
        case '1':
            input_data(sales , daily_entries);
            write_to_file(sales, daily_entries);
            break;
        case '2':
            read_from_file(sales, daily_entries);
            report(sales, daily_entries);
            break;
        case '3':
            search(sales, daily_entries);
            break;
        case '4':
            return 1;
            break;
        
        default:
            cout << "Invalid input chooice\n please choose again\n";
            break;
        }
    }


    return 0;
}

// This function doesn't need an explanation
void input_data(s_data daily[] , int& number){
    cout << "number of daily sales enteries: ";
    cin >> number;

    for(int i = 0; i < number; i++){
        cout << "Entery "<< i + 1 << endl;
        cout << "Employee identification number (1-4): ";
        cin >> daily[i].salse_person;
        cout << "Prodict identification number(1 - 5): ";
        cin >> daily[i].product_sold;
        cout << "Sales amount: ";
        cin >> daily[i].amount;
    }
}

// This also doesn't need an explanation
void write_to_file( s_data daily[], int number){
    ofstream fwrite("database.txt", ios::app);
    if(!fwrite){
        cerr << "Error opening file for writing\n"; // cerr is used to display error messeges.(we can also use cout; no difference)
        return;
    }

    for(int i = 0; i < number; i++){
        fwrite << daily[i].salse_person << " " << daily[i].product_sold << " " << daily[i].amount <<endl;
    }

    fwrite.close();
}

void read_from_file(s_data daily[], int &number){
    ifstream fread("database.txt");
    if(!fread){
        cerr << "Error opening file for reading\n";
        return;
    }

    number = 0;

    // The while loop returns true as long as the extaction operation succeds. once the file pointer 
    // reaches the end of file it returns false
    while(fread >> daily[number].salse_person >> daily[number].product_sold >> daily[number].amount){
        number++;
    }    

    fread.close();
}

void report(s_data daily[], int number){
    double salseBySalseperson[employee] = {0};
    double slaseByProduct[product_number] = {0};
    double total(0);

    // To itrate between all the entries
    for(int i = 0; i < number; i++){
        if(daily[i].salse_person >=1 && daily[i].salse_person <= employee && daily[i].product_sold >= 1 && daily[i].product_sold <= product_number){
            salseBySalseperson[daily[i].salse_person - 1] += daily[i].amount;   // Calculates total sales by a single salse person
            slaseByProduct[daily[i].salse_person - 1] += daily[i].amount;   // Calculates total salse of a single product   
            total += daily[i].amount;   // Calculates the total amount sold
        }
    }

    cout << "\nMonthly Sales Report:\n";
    cout << setw(15) << "Product\\Salesperson";
    for (int i = 1; i <= employee; i++) {
        cout << setw(10) << i;
    }
    cout << setw(10) << "Total\n";

    for(int i = 0; i < product_number; i++){    // Itrate between rows of the table
        cout << setw(15) << i + 1;
        for(int j = 0; j < employee; j++){  // Itrate between colums of the table
            double salesAmount = 0;
            for(int k = 0; k < number; k++){
                if(daily[k].product_sold == i + 1 && daily[k].salse_person == j + 1){   // Calculates the salse of a single salse person on a single product
                    salesAmount += daily[k].amount;
                }
            }
            cout << setw(10) << salesAmount;
        }
        cout << setw(10) << slaseByProduct[i] << endl;

    }

    cout << setw(15) << "Total";
    for(int i = 0; i < employee; i++){
        cout << setw(10) << salseBySalseperson[i];
    }
    cout << setw(10) << total << endl;
}

void search(s_data sales[], int number){

    int password = 123456;
    int ver;

    cout << "Only authorized personal has access to this feature\n";
    cout << "Enter password to access the search freacher\n";
    cout << "Password: ";

    for(int i = 3; i >= 0; i--){
        cin >> ver;
        if(ver == password)
            break;
        if (i == 0){
            cout << "You have exausted your tries\n";
            return;
        }
        cout << "Incorrect password " << i  << " tries left\n";
    }

    char choice;

    cout << "Search by:\n";
    cout << "1. Salse person/ employee\n";
    cout << "2. product\n";
    cout << "choice: ";
    cin >> choice;

    while(cin.fail()){
        cin.clear();

        cout << "Error handling input data\n";
        cout << "please enter a character 1 or 2 \n";
        cout << "Enter chooice: ";
        cin.ignore();

        cin >> choice;
    }

    if(choice == '1'){

        int slase_person_ID;

        cout << "Enter salse persons identification number(1-4): ";
        cin >> slase_person_ID;
        cout << "sales records for sales person " << slase_person_ID << ":\n";
        cout<<"Product\tAmount\n";
        for (int i = 0; i < number; i++){
            if (sales[i].salse_person == slase_person_ID)
                cout << sales[i].product_sold << "\t" << sales[i].amount << endl;
        }
    }else if(choice == '2'){

        int product_ID;

        cout << "Enter products identification number(1-5): ";
        cin >> product_ID;
        cout << "sales records for product " << product_ID << ":\n";
        cout<<"salse person\tAmount\n";
        for(int i = 0; i < product_number; i++){
            if(sales[i].product_sold == product_ID)
                cout << sales[i].salse_person << "\t\t" << sales[i].amount << endl;
        }
        
    }else{
        cout << "Invalid input!\n";
    }

}
