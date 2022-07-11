#include "functions.h"


Currency userEnterCurrency(int option)
{

    bool trueLoop;
    
      //Array of Currency Objects, I.E. Array of Names and values
    Currency currencyObj[10];
    trueLoop = true;
    // std::cout << "You have " << currencyObj[0].getCurrencyAmnt() << " " << currencyObj[0].getCurrencyName() << "\n";

        if(option == 1)
        {
       
        }
        else if(option == 2)
        {
           
        }
        else if (option == 3)
        {
      
        }
        else
        {
            // invalid input please try again
            std::cout << "invalid input, enter a valid one\n";
        }
    
return currencyObj[10];
   
}

void helloWorld()
{

    std::string selection;
    int selectionInt;

    std::cout << "Hello! You a max of 10 Currencies you can input \n";
    
    std::cout << "Would you like to enter:\n 1. A single Currency \n 2. Variable amount \n 3. None (exits the program)\n";
    getline(std::cin,selection);

    //convert string to integer
    selectionInt = std::stoi(selection); 

    // call user enter currency
    userEnterCurrency(selectionInt);

}




int Currency::getCurrencyAmnt()
{
    return currencyAmnt;
}

std::string Currency::getCurrencyName()
{
    return currencyName;
}

