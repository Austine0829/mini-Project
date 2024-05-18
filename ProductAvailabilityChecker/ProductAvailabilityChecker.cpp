#include <iostream>

using namespace std;

int searchBass(string bassGuitars[5], string searchBar, int size);
int searchElectric(string electricGuitars[5], string searchBar, int size);

int main (){
    
     string bassGuitars[5];

         bassGuitars[0] = "player plus precision bass";
         bassGuitars[1] = "player plus jazz bass"; 
         bassGuitars[2] = "vintera 2 60s bass 6"; 
         bassGuitars[3] = "american professional 2 jazz bass"; 
         bassGuitars[4] = "american vintage 2 1960 precision";

     string electricGuitars[5];

         electricGuitars[0] = "american professional 2 stratocaster";
         electricGuitars[1] = "affinity series stratocaster"; 
         electricGuitars[2] = "player stratocaster";
         electricGuitars[3] = "american professional 2 telecaster";
         electricGuitars[4] = "american vintage 2 1961 stratocaster";

     string searchBar;
     
     int size[2];
    
         size[0] = sizeof(bassGuitars)/sizeof(bassGuitars[0]);
         size[1] = sizeof(electricGuitars)/sizeof(electricGuitars[0]);

     int productNum;
     int choice;

         cout << "1. Fender Basses: " << '\n';
         cout << "2. Fender Guitars: " << '\n';
         cout << "3. Exit" << '\n';
         cin >> choice;

    switch (choice)
    {
    case 1 :
        
         cout << "Enter Bass Model: ";
         getline (cin >> ws, searchBar);

         productNum = searchBass(bassGuitars, searchBar, size[0]);

    if (productNum != -1)
    {   
         cout << "Product # " << productNum << '\n';
         cout << searchBar << " " << "is Available" << '\n';
    }

    else

    {
         cout << searchBar << " " << "is Currently not Available";
    }

         break;

    case 2 : 
        
         cout << "Enter Electric Guitar Model: ";
         getline (cin >> ws, searchBar);

         productNum = searchElectric(electricGuitars, searchBar, size[0]);

    if (productNum != -1)
        {
         cout << "Product # "<< productNum << '\n';
         cout << searchBar << " " << "is Available" << '\n';
        }

    else
        {
         cout << searchBar << " " << "is Currently not Available" << '\n';
        }
        
         break;

    case 3 : 

        cout << "Thank you for using Product Availability Checker!" << '\n';

         break;
    
    default:
        break;
    }

    return 0;
}

int searchBass(string bassGuitars[5], string searchBar, int size){

    int i;

    for ( i = 0; i < size; i++)
    {
        if (bassGuitars[i] == searchBar)
        {
            return i;
        }
        
    }
    
    return -1;
}

int searchElectric(string electricGuitars[5], string searchBar, int size){
    
    int j;

    for ( j = 0; j < size; j++)
    {
        if (electricGuitars[j] == searchBar)
        {
            return j;
        }
        
    }
    
    return -1;
}


    