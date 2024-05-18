#include <iostream>

using namespace std;

double depositFunc(double *pBalance);
double widthrawFunc(double *pBalance);

int main (){
    double balance = 0;
    double *pBalance = &balance;
    int choice;
    
    do
    {
    
    cout << "-----------\n";
    cout << "[1]Balance\n";
    cout << "[2]Deposit\n";
    cout << "[3]Widthraw\n";
    cout << "[4]Exit\n";
    cout << "-----------\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         cout << "----------------------------------\n";
         cout << "My Balance: " << *pBalance << "Php\n";
         cout << "----------------------------------\n";

        break;

    case 2: 

         depositFunc(pBalance);

        break;

    case 3: 

         widthrawFunc(pBalance);

         break;

    case 4: 

         cout << "Thank You For Visiting!\n";
        
        break;
    
    default:

        cout << "Invalid Choice\n";

        break;
    }
         
    } 
    
    while (choice != 4);


    return 0;
}

double depositFunc(double *pBalance){

     cout << "Enter Amount To Deposit: ";
     cin >> *pBalance;

     if (*pBalance < 0)
     {
        cout << "Invalid Amount!\n";
     }
     
     return 0;
}

double widthrawFunc(double *pBalance){

    double amount;


    cout << "Enter Amount To Widthraw: ";
    cin >> amount;
    

    if (amount < 0)
    {
        cout << "Invalid Amount!\n";
    }

    else if (amount > *pBalance)
    {
        cout << "Insufficient Balance!\n";
    }

    else
    {
        *pBalance -= amount;

        cout << "------------------------------------------\n";
        cout << "You Widthraw: " << amount << "Php\n";
        cout << "Remaining Balance: " << *pBalance << "Php\n";
        cout << "------------------------------------------\n";
    }
        
    return 0;
}