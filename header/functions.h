#include <stdio.h>
#include <iostream>
#include <string>


void helloWorld();


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



