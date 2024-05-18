#include <iostream>
#include <cmath>

using namespace std;

// calcutor for fahrenheit to celsius
// and celsius to fahrenheit

int main(){
    
    double fahrenheit;
    double celsius;
    char storage; // storage for (f) and (c) 

    cout << "Enter (f)if Fahrenheit to Celsius and (c)if Celsius to Fahrenheit: ";
    cin >> storage;

    switch (storage)
    {
    case 'f':
        cout << "Enter value: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) / 1.8;

        cout << celsius;
        break;

    case 'c':
		    cout << "Enter value: ";
				cin >> celsius;

				fahrenheit = (celsius * 9/5) + 32;

				cout << fahrenheit;
				break; 
         
    default:
		    
				cout << "Choose only from (f)Fahrenheit and (c)Celsius";
        break;
    }
    



     
   
    return 0;
}