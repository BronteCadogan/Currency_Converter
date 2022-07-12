
#include "functions.h"


int main(int argc, char *argv[])
{
    //Array of Currency Objects, I.E. Array of Names and values
    Currency currencyObj;
    //object vector
    std::vector<Currency> currencies;
    
    createCurrs(currencies, currencyObj);


   std::cout << "There are " << currencies.size() << " currencies saved " << std::endl;
   
    std::cout << currencies << std::endl;

    std::cout << "confirm your exit" ;

    int xyz;
    std::cin >> xyz;
    return 0;
}