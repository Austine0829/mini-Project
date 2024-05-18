#include <iostream>
#include <ctime>

using namespace std;

//NUMBER GUESSING GAME//

int main() {

    srand(time(0));

    int num;
    int guess;
    int tries;

    num = rand() % 20 + 1;
     
    cout << "Number Guessing Game!" << '\n'; 
    cout << "Pick Number From (1-20) Only!" << '\n';


    do
    {
        cout << "Enter Your Guess Number: ";
        cin >> guess;
        tries++;

    if (guess > num)
    {
        cout << "Too High!"<< '\n';
    }

    else if (guess < num)
    {
        cout << "Too Low!"<< '\n';
    }
    
    else {
        cout << "You are Correct!" << endl;
        cout << "Number of Tries Before Getting the right Number: " << tries << endl;
    }
    
        
    } while (guess != num);
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    
    

    return 0;
}