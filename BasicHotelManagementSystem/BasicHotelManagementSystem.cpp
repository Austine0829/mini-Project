#include <iostream>

int funcOne(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant);
int funcTwo(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant);
int funcThree(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant);
int funcFour(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant);
int funcFive(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant);
int funcSix(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant);
int SystemtotalIncome(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int size);

int main (){
    
    int quant;
    int choice;
    std:: string pCode;

    int quanProduct[6];
    quanProduct[0] = 10;  //Rooms
    quanProduct[1] = 100; //Pasta
    quanProduct[2] = 100; //Burger
    quanProduct[3] = 100; //Noodles
    quanProduct[4] = 100; //Shake
    quanProduct[5] = 100; //Chicken

    int soldProduct[6];
    soldProduct[0] = 0; //Rooms
    soldProduct[1] = 0; //Pasta
    soldProduct[2] = 0; //Burger
    soldProduct[3] = 0; //Noodles
    soldProduct[4] = 0; //Shake
    soldProduct[5] = 0; //Chicken

    int priceProduct[6];
    priceProduct[0] = 1599; //Rooms
    priceProduct[1] = 180;  //Pasta
    priceProduct[2] = 120;  //Burger
    priceProduct[3] = 140;  //Noodles
    priceProduct[4] = 100;  //shake
    priceProduct[5] = 250;  //Chicken

    int totalIncome[6];
    totalIncome[0] = 0; //Rooms
    totalIncome[1] = 0; //Pasta
    totalIncome[2] = 0; //Burger
    totalIncome[3] = 0; //Noodles
    totalIncome[4] = 0; //Shake
    totalIncome[5] = 0; //Chicken

    int size = sizeof(totalIncome)/sizeof(totalIncome[0]);


    do
    {
    std:: cout << "[1]Room" << '\n';
    std:: cout << "[2]Pasta" << '\n';
    std:: cout << "[3]Burger" << '\n';
    std:: cout << "[4]Noodles" << '\n';
    std:: cout << "[5]Shake" << '\n';
    std:: cout << "[6]Chicken" << '\n';
    std:: cout << "[7]Exit" << '\n';

    std:: cout << "Enter Your Choice: ";
    std:: cin >> choice;

    switch (choice)
    {
    case 1:
        
         funcOne(quanProduct, soldProduct, priceProduct, totalIncome, quant);

        break;

    case 2:

         funcTwo(quanProduct, soldProduct, priceProduct, totalIncome, quant);
        
        break;

    case 3:
        
         funcThree(quanProduct, soldProduct, priceProduct, totalIncome, quant);
        
        break;

    case 4: 

         funcFour(quanProduct, soldProduct, priceProduct, totalIncome, quant);

        break;    
    
    case 5: 
     
         funcFive(quanProduct, soldProduct, priceProduct, totalIncome, quant);

        break;

    case 6: 

         funcSix(quanProduct, soldProduct, priceProduct, totalIncome, quant);

        break;

    case 7:

         std:: cout << "Thank You For Visiting!";

        break; 
        
    default:
        
        std:: cout << "Invalid Choice!" << '\n';

        break;

    }

    if (choice == 00)
    {

         std:: cout << "***********************************************" << '\n';
         std:: cout << "You Need To Enter Passcode To Access This Function" << '\n';
         std:: cout << "***********************************************" << '\n';
         std:: cin >> pCode;
         
         if (pCode == "08292002")
         {
            SystemtotalIncome(quanProduct, soldProduct, priceProduct, totalIncome, size);
         }
         else
         {  
            std:: cout << "***************" << '\n';
            std:: cout << "Wrong PassCode!" << '\n';
            std:: cout << "***************" << '\n';
         }

    }
    
    } 
    
    while (choice != 7);

    return 0;
}

int funcOne(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant){
     
    std:: cout << "Enter How Many Rooms You Want To Reserve: ";
    std:: cin >> quant;

     if (quant < 0)
    {
        std:: cout << "Invalid Quantity!";
    }

    else if (quantProduct[0] < quant)
    {
         std:: cout << "Only " << quantProduct[0] << " Rooms Can Be Rented For Now"; 
    }

    else if (quantProduct[0] - soldProduct[0] >= quant)
    {    

         soldProduct[0] += quant;
         totalIncome[0] += priceProduct[0] * soldProduct[0];

         std:: cout << "********************************************" << '\n';
         std:: cout << soldProduct[0] << " Room/s Has Been Reserved " << '\n';
         std:: cout << "Your Total Bill: " << totalIncome[0] << "Php" << '\n';
         std:: cout << "********************************************" << '\n';

    }
    
    return 0;
}

int funcTwo(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant){

    std:: cout << "Enter How Many Pasta You Want To Order: ";
    std:: cin >> quant;

     if (quant < 0)
    {
         std:: cout << "Invalid Quantity!";
    }
    
    else if (quantProduct[1] - soldProduct[1] >= quant)
    {    

         soldProduct[1] += quant;
         totalIncome[1] += priceProduct[1] * soldProduct[1];
         
         std:: cout << "***********************************************************************" << '\n';
         std:: cout << soldProduct[1] << " Pasta Will Be Delivered To Your Room When it's Ready" << '\n';
         std:: cout << "Your Total Bill: " << totalIncome[1] << "Php" << '\n';
         std:: cout << "***********************************************************************" << '\n';

    }   

    return 0;
}

int funcThree(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant){

    std:: cout << "Enter How Many Burger You Want To Order: ";
    std:: cin >> quant;

     if (quant < 0)
    {
         std:: cout << "Invalid Quantity!";
    }
    
    else if (quantProduct[2] - soldProduct[2] >= quant)
    {    

         soldProduct[2] += quant;
         totalIncome[2] += priceProduct[2] * soldProduct[2];

         std:: cout << "**************************************************************************" << '\n';
         std:: cout << soldProduct[2] << " Burger/s Will Be Delivered To Your Room When it's Ready" << '\n';
         std:: cout << "Your Total Bill: " << totalIncome[2] << "Php" <<'\n';
         std:: cout << "**************************************************************************" << '\n';

    }   

    return 0;
}

int funcFour(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant){

    std:: cout << "Enter How Many Noodles Soup You Want To Order: ";
    std:: cin >> quant;

     if (quant < 0)
    {
         std:: cout << "Invalid Quantity!";
    }
    
    else if (quantProduct[3] - soldProduct[3] >= quant)
    {    

         soldProduct[3] += quant;
         totalIncome[3] += priceProduct[3] * soldProduct[3];
         
         std:: cout << "*****************************************************************************" << '\n';
         std:: cout << soldProduct[3] << " Noodle Soup Will Be Delivered To Your Room When it's Ready" << '\n';
         std:: cout << "Your Total Bill: " << totalIncome[3] << "Php" << '\n';
         std:: cout << "*****************************************************************************" << '\n';
    }   

    return 0;
}

int funcFive(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant){

    std:: cout << "Enter How Many Shakes You Want To Order: ";
    std:: cin >> quant;

     if (quant < 0)
    {
         std:: cout << "Invalid Quantity!";
    }
    
    else if (quantProduct[4] - soldProduct[4] >= quant)
    {    

         soldProduct[4] += quant;
         totalIncome[4] += priceProduct[4] * soldProduct[4];
         
         std:: cout << "*************************************************************************" << '\n';
         std:: cout << soldProduct[4] << " Shake/s Will Be Delivered To Your Room When it's Ready" << '\n';
         std:: cout << "Your Total Bill: " << totalIncome[4] << "Php" << '\n';
         std:: cout << "*************************************************************************" << '\n';

    }   

    return 0;
}

int funcSix(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int quant){

    std:: cout << "Enter How Many Chicken You Want To Order: ";
    std:: cin >> quant;

     if (quant < 0)
    {
         std:: cout << "Invalid Quantity!";
    }
    
    else if (quantProduct[5] - soldProduct[5] >= quant)
    {    

         soldProduct[5] += quant;
         totalIncome[5] += priceProduct[5] * soldProduct[5];
         
         std:: cout << "*************************************************************************" << '\n';
         std:: cout << soldProduct[5] << " Chicken Will Be Delivered To Your Room When it's Ready" << '\n';
         std:: cout << "Your Total Bill: " << totalIncome[5] << "Php" << '\n';
         std:: cout << "*************************************************************************" << '\n';

    }   

    return 0;
}

int SystemtotalIncome(int *quantProduct, int *soldProduct, int *priceProduct, int *totalIncome, int size){
    
    //to access this function 
    //just type "00" and the 
    //passcode is "09292002"

    int total = 0;

    std:: cout << "SOLD PRODUCTS" << '\n';
    std:: cout << "Room: " << soldProduct[0] << " Sold" << '\n';
    std:: cout << "Pasta: " << soldProduct[1] << " Sold" << '\n';
    std:: cout << "Burger: " << soldProduct[2] << " Sold" << '\n';
    std:: cout << "Noodles: " << soldProduct[3] << " Sold" << '\n';
    std:: cout << "Shake: " << soldProduct[4] << " Sold" << '\n';
    std:: cout << "Chicken: " << soldProduct[5] << " Sold" << '\n';

    for (int i = 0; i < size; i++)
    {
        total += totalIncome[i];
    }
    std:: cout << "********************************" << '\n';
    std:: cout << "Total Income: " << total << "Php" << '\n';
    std:: cout << "********************************" << '\n'; 

    return total;
}