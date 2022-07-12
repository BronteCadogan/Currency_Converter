#include "functions.h"


Currency userEnterCurrency(int option, Currency currencyObj[10])
{
    // Currency currencyObj[10];
    bool trueLoop;
    std::string currencyName;
    int currencyAmount;
    std::string numero;
    int num = 11;

        if(option == 1)
        {
            //single currency is entered
            std::cout << "Enter your currnecy name\n";
            std::cin >> currencyName;
            currencyObj[0].setCurrencyName(currencyName);


            std::cout << "Enter the amount you have\n";
            std::cin >> currencyAmount;
            currencyObj[0].setCurrencyAmnt(currencyAmount);
        }
        else if(option == 2)
        {
           
            while (num > 10)
            {
                std::cout << "How many do you want to enter, max is 10\n";
                getline(std::cin,numero);
                //convert string to integer
                num = std::stoi(numero); 
                if(num > 10)
                {
                     std::cout << "The max is 10, enter a smaller number\n";
                }
            }

            for(int i = 0; i < num; i++)
            {
                std::cout << "Enter your currnecy name\n";
                std::cin >> currencyName;
                currencyObj[i].setCurrencyName(currencyName);

                std::cout << "Enter the amount you have\n";
                std::cin >> currencyAmount;
                currencyObj[i].setCurrencyAmnt(currencyAmount);
            }
           
        }
        else if (option == 3)
        {
            trueLoop = false;
        }
        else
        {
            // invalid input please try again
            std::cout << "invalid input, enter a valid one\n";
        }
    
return currencyObj[10];
   
}

void helloWorld(Currency currencyObj[10])
{

    std::string selection;
    int selectionInt;

    std::cout << "Hello! You a max of 10 Currencies you can input \n";
    
    std::cout << "Would you like to enter:\n 1. A single Currency \n 2. Variable amount \n 3. None (exits the program)\n";
    getline(std::cin,selection);

    //convert string to integer
    selectionInt = std::stoi(selection); 

    // call user enter currency
    userEnterCurrency(selectionInt, currencyObj);

}




int Currency::getCurrencyAmnt()
{
    return currencyAmnt;
}

std::string Currency::getCurrencyName()
{
    return currencyName;
}

