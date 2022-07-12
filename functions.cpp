#include "functions.h"


std::ostream& operator<<(std::ostream& COUT, Currency& currObj)
  {
    COUT << " You have " << currObj.currencyAmnt << " " << currObj.currencyName << std::endl;
    return COUT;
  }

std::ostream& operator<<(std::ostream& OUT,  const std::vector<Currency>& vector)
    {
        //iterator
        for (auto element : vector) {
            OUT << element << " ";
        }
        return OUT;
    }


void createCurrs(std::vector<Currency>& curr, Currency& currObj)
{
    int entries;
    bool TF = true;
    while(TF)
        {
        std::cout << "How many entries would you like to enter" << std::endl;
        std::cin >> entries;
            if(entries <= 0)
                {
                    std::cout << "Entries cannot be 0 or negative" << std::endl;
                }
            else if (entries > 10)
                {
                    std::cout << "Too Many Entries" << std::endl;
                }
            else
                break;
            
        }
            for(int i = 0; i < entries; i++)
            {   
                std::cout << "Enter Currency Name" << std::endl;
                std::cin >> currObj.currencyName;
                std::cout << "Enter Currency Amount" << std::endl;
                std::cin >> currObj.currencyAmnt;
                curr.push_back(currObj);

            }
            
   
}

