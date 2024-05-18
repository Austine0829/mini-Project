#include <iostream>

int main (){
    
    int foodPrice[] = {10, 5, 5, 15, 5};
    int drinkPrice[] = {2, 3, 2, 4, 4};
    std:: string foodList[5] = {"Pizza", "Burger", "Fries", "Chicken", "Hotdog"};
    std:: string drinksList[5] = {"Pepsi", "Coca-Cola", "Sprite", "Pineappe Juice", "Apple Juice"};
    std:: string orderList[5];
    int size[2] = {sizeof(foodList)/sizeof(foodList[0]), sizeof(drinksList)/sizeof(drinksList[0])};
    int orderTotal = 0;
    int choice;

    std:: cout << "[1]Food List" << '\n';
    std:: cout << "[2]Drinks List" << '\n';
    std:: cout << "[3]Exit" << '\n';
    std:: cout << "Enter Choice: ";
    std:: cin >> choice;

    ////////////////////////////////////

    switch (choice)
    {
    case 1:
        
    do
    {
        
    std:: cout << "[1] Pizza " << "$10" << '\n';
    std:: cout << "[2] Burger " << "$5" << '\n';
    std:: cout << "[3] Fries " << "$5" << '\n';
    std:: cout << "[4] Chicken " << "$15" << '\n';
    std:: cout << "[5] Hotdog " << "$5" << '\n';
    std:: cout << "[0] Total" << '\n';
    std:: cout << "Enter Choice: ";
    std:: cin >> choice;        
   
    if (choice == 1)
    {  
        orderTotal += foodPrice[0];
        orderList[1] += foodList[0];
    }

    else if (choice == 2)
    {
        orderTotal += foodPrice[1];
        orderList[2] += foodList[1];
    }

    else if (choice == 3)
    {
        orderTotal += foodPrice[2];
        orderList[3] += foodList[2];
    }
    
    else if (choice == 4)
    {
        orderTotal += foodPrice[3];
        orderList[4] += foodList[3]; 
    }
    
    else if (choice == 5)
    {
        orderTotal += foodPrice[4];
        orderList[5] += foodList[4];
    }
    
    } 
    
     //////////////////////////////

    while (choice != 0);

        std:: cout << "*****************************" << '\n';
        std:: cout << "Total: " << "$" << orderTotal << '\n';
        std:: cout << "*****************************" << '\n';
    
        std:: cout << "You Ordered: " << '\n'; 

         for (int i = 0; i < size[0]; i++)
        {
        if (!orderList[i].empty())
        {
             std:: cout << orderList[i] << '\n';
        }
        
        }
     
        break;
    
    case 2:

    do 
    {
            
    std:: cout << "[1] Pepsi " << "$2" << '\n';
    std:: cout << "[2] Coca-Cola " << "$3" << '\n';
    std:: cout << "[3] Sprite " << "$2" << '\n';
    std:: cout << "[4] Pineapple Juice " << "$4" << '\n';
    std:: cout << "[5] Apple Juice " << "$4" << '\n';
    std:: cout << "[0] Total" << '\n';
    std:: cout << "Enter Choice: ";
    std:: cin >> choice;

        if (choice == 1)
        {
            orderTotal += drinkPrice[0];
            orderList[1] += drinksList[0];
        }

        else if (choice == 2)
        {
            orderTotal += drinkPrice[1];
            orderList[2] += drinksList[1];
        }

        else if (choice == 3)
        {
            orderTotal += drinkPrice[2];
            orderList[3] += drinksList[2];
        }
        
        else if (choice == 4)
        {
            orderTotal += drinkPrice[3];
            orderList[4] += drinksList[3];
        }
        
        else if (choice == 5)
        {
            orderTotal += drinkPrice[4];
            orderList[5] += drinksList[4];
        }

    }

        ////////////////////////////////
        
        while (choice != 0);

        std:: cout << "*****************************" << '\n';
        std:: cout << "Total: " << "$" << orderTotal << '\n';
        std:: cout << "*****************************" << '\n';

        std:: cout << "You Ordered: " << '\n';

        for (int j = 0; j < size[1]; j++)
        {   
            if (!orderList[j].empty())
            {
                  std:: cout << orderList[j] << '\n';
            }
            
        }
         
        break;

    case 3:
        
        std:: cout << "Thank You For Buying!";

        break;

    default:
        break;
    }
    
    
    return 0;
}