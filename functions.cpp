#include "functions.h"

void helloWorld()
{
    std::cout << "hello world\n";
}



int Currency::getCurrencyAmnt()
{
    std::cout << "Enter Native Currency\n";
    getline(std::cin,currencyName);
    std::cout << "Enter Amount\n";

    // getline(std::cin,currency);
    std::cin >> currency;

    return currency;
}