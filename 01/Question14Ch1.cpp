//  NAME  : AIDEN PEACE 
//  CLASS : CS1A TTH 2pm 
// ASSIGNMENT : QUESTION14 ch1 

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{

        double OriginalQuarters;
	double OriginalDimes;
	double OriginalNickels; 
	double OriginalPennies;

	double ConvertedQuarters;
	double ConvertedDimes;
	double ConvertedNickels; 
	double ConvertedPennies; 

	double TotalPennies;

	std::cout << "How many Quarters do you have? ";
        std::cin  >> OriginalQuarters;

	std::cout << "How many Dimes do you have? ";
	std::cin  >> OriginalDimes;

	std::cout << "How many Nickels do you have? ";
	std::cin  >> OriginalNickels;

	std::cout << "How many Pennies do you have? ";
	std::cin  >> OriginalPennies; 

	ConvertedQuarters = (OriginalQuarters * .25) * 100;
	ConvertedDimes    = (OriginalDimes * .10 ) * 100; 
	ConvertedNickels  = (OriginalNickels * .5 ) * 10; 
	ConvertedPennies  = OriginalPennies;

	std::cout << "You have " <<  OriginalQuarters << " quarters that is " << ConvertedQuarters << " in pennies !\n";
        std::cout << "You have " <<  OriginalDimes    << " Dimes that is "    << ConvertedDimes    << " in pennies !\n";
        std::cout << "You have " <<  OriginalNickels  << " Nickels that is "  << ConvertedNickels  << " in pennies !\n";
        std::cout << "You have " <<  OriginalPennies  << " Pennies that is "  << ConvertedPennies  << " in pennies !\n"; 	
	
	TotalPennies = ConvertedQuarters + ConvertedDimes + ConvertedNickels + ConvertedPennies; 

	std::cout << "You have " << TotalPennies << " total pennies !\n";
	  
}
