#pragma once    
#include <iostream>
#include <string>
#include <ostream>
#include <vector>
#include <iterator>


class Currency
{
private:
public:
    int currencyAmnt;
    std::string currencyName;
};
   

    //operator overload
    std::ostream& operator<<(std::ostream& COUT, Currency& currObj);


    //logic
    void createCurrs(std::vector<Currency>& curr, Currency& currObj);

    //overload
    std::ostream& operator<<(std::ostream& OUT,  const std::vector<Currency>& vector);


   

