#include <stdio.h>
#include <iostream>
#include <string>

class Currency
{
private:
    int currencyAmnt;
    std::string currencyName;
public:
    //setter
    void setCurrencyAmnt(int amount)
    {   
        currencyAmnt = amount;
    }
    void setCurrencyName(std::string name)
    {
        currencyName = name;
    }

    //getter
    int getCurrencyAmnt();
    std::string getCurrencyName();
};


    //currency selection
    Currency userEnterCurrency(int option, Currency currencyObj[10]);

    void helloWorld();


