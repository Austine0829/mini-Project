#include <iostream>

using namespace std;

//INFORMATION COMPILER///

void fullName(string firstName, string middleName, string lastName);

 
int main() {
    
    string firstName;
    string middleName;
    string lastName;
    char sex;
    char status;
    int age;
    string address;
    string placeOfBirth;
    string dateOfBirth;

    cout << "^^^INFORMATION COMPILER^^^" << '\n'; //title    
    


    //inputs

    cout << "Enter Your Name: ";
    getline (cin >> ws, firstName);

    cout << "Enter Your Middle Name: ";
    cin >> middleName;

    cout << "Enter Your Last Name: ";
    cin >> lastName;
    
    cout << "Enter Your Sex (M)if Male (F)if Female: ";
    cin >> sex;

    cout << "Enter Your Status (S)if Single (M)if Married (W)if Widowed: ";
    cin >> status;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Your Address: ";
    getline (cin >> ws, address);

    cout << "Enter Place Of Birth: ";
    getline (cin >> ws, placeOfBirth);

    cout << "Enter Date Of Birth: ";
    getline (cin >> ws, dateOfBirth);



    //Outputs

    fullName(firstName, middleName, lastName);
    
    switch (sex)
    {
    case 'm':
        cout << "Sex: " << "Male" << '\n';
        break;

    case 'f':
        cout << "Sex: " << "Female" << '\n';
        break;
    
    default:
        cout << "Error";
        break;
    }

    switch (status)
    {
    case 's':
        cout << "Status: " << "Single" << '\n';
        break;
    
    case 'm': 
        cout << "Status: " << "Married" << '\n';
        break;

    case 'w': 
        cout << "Status: " << "Widowed" << '\n';        
    
    default:
        cout << "Error";
        break;
    }
    
    cout << "Age: " << age << '\n';

    cout << "Address: " << address << '\n';
    
    cout << "Place Of Birth: " << placeOfBirth << '\n';

    cout << "Date Of Birth: " << dateOfBirth << '\n';

    return 0;
}

void fullName(string firstName, string middleName, string lastName){
    cout <<"Full Name: " << firstName << ' ' << middleName << ' ' << lastName << '\n';
}