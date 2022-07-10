
#include "functions.h"


int main(int argc, char *argv[])
{
    //currency object
    Currency currencyObj;

    int confirmOut;
    helloWorld();
    
    std::cout << "Enter your currnecy name\n";
    std::string currencyName;
    std::cin >> currencyName;
    currencyObj.setCurrencyName(currencyName);

    
    std::cout << "Enter the amount you have\n";
    int currencyAmount;
    std::cin >> currencyAmount;
    currencyObj.setCurrencyAmnt(currencyAmount);

    std::cout << "You have " << currencyObj.getCurrencyAmnt() << " " << currencyObj.getCurrencyName() << "\n";


    std::cin >> confirmOut;
    return 0;
}