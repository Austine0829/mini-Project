#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer; 
    char choice;
    int playerScore;
    int computerScore;

   do
   {
     
      std:: cout << "Type(S) to Start Game: " << '\n';
       std:: cout << "Type(E)to Exit Game: " << '\n';
       std:: cin >> choice;
    
    switch (choice)
    {
    case 's':

    player = getUserChoice();
    std:: cout << "Your Choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    std:: cout << "Your Opponent's Choice is: ";
    showChoice(computer);

    chooseWinner(player, computer);
    
    if (player == 'r')
    {
      if (computer == 's') playerScore++;
      else if (computer == 'p') computerScore++;
    }

    else if (player == 'p')
    {
      if (computer == 'r') playerScore++;
      else if (computer == 's') computerScore++;
    }

    else if (player == 's')
    {
      if (computer == 'p') playerScore++;
      else if (computer == 'r') computerScore++;
    }

    std:: cout << "Your Score: " << playerScore << '\n';
    std:: cout << "Your Opponent's Score: " << computerScore << '\n';
    
     break; 

      case 'e':
    std:: cout << "Thank You For Playing!";

      break;
    
    default:

    std:: cout << "Invalid Choice"; 

      break;

    }

   } 
   
   while (choice != 'e');
       
    return 0;
}

char getUserChoice(){
    
     char player;
     do
     {
         std:: cout << "Rock-Paper-Scissorcs Game!" << '\n';
         std:: cout << "(r)for Rock, (p)for Paper, (s)for Scissors (e)to Exit" << '\n';
         std:: cout << "Enter Your Choice: ";
         std:: cin >> player;   
     } 
    
     while (player != 'r' && player != 'p' && player != 's');

     return player;
}

char getComputerChoice(){

    srand(time(0));

    int computer = rand() % 3 + 1;

    switch (computer)
     {
     case 1:
        return 'r';        
        

     case 2: 
        return 'p';
        

     case 3:    
        return 's';
        
     }
      
     return 0;
    
}

 void showChoice(char choice){
    
     switch (choice)
    {
     case 'r':
       std:: cout << "Rock!" << '\n';
        break;
    
     case 'p':
       std:: cout << "Paper!" << '\n';
        break;

     case 's':
        std:: cout << "Scissors!" << '\n';
        break;
             

     default:
        break;
     }
    
 }

 void chooseWinner(char player, char computer ){

   switch (player)
   {
   case 'r': 
   
   if (computer == 'r')
   {
      std:: cout << "Tie!" << '\n';
   }

   else if (computer == 'p')
   {
      std:: cout << "You Lose!" << '\n';
   }
   
   else
   {
      std:: cout << "You Won!" << '\n';
   }
      break;

   case 'p': 
   if (computer == 'r')
   {
      std:: cout << "You Won!" << '\n';
   }

   else if (computer == 'p')
   {
      std:: cout << "Tie!" << '\n';
   }

   else
   {
      std:: cout << "You Lose!" << '\n';
   }
      break;
      
   case 's': 
   if (computer == 'r')
   {
      std:: cout << "You Lose!" << '\n';
   }

   else if (computer == 'p')
   {
      std:: cout << "You Won!" << '\n';
   }

   else
   {
      std:: cout << "Tie!" << '\n';
   }

      break;
   
     default:
      break;
   }
   
}
