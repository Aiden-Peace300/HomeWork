//  NAME  : AIDEN PEACE 
//  CLASS : CS1A TTH 2pm 
// ASSIGNMENT : QUESTION1 page340

#include <iostream>
#include <iomanip>
#include <cstdlib>

int main()
{
        int base;
        int first;
        int second;
        int third;
        int fourth;
        int fifth;
        int sixth;
        int seventh;
        int sum;
	
	while (base > 0) {
        std::cout << "Please enter a whole number: ";
	std::cin >> base;
	
	base = abs(base);

        first   = base / 1000000;
        second  = base / 100000 % 10;
        third   = base / 10000  % 10;
        fourth  = base / 1000   % 10;
        fifth   = base / 100    % 10;
        sixth   = base / 10     % 10;
        seventh = base % 10;


        sum = first + second + third + fourth + fifth + sixth + seventh;

        std::cout << first << " " << second << " " << third << " " << fourth << " " << fifth << " " << sixth << " " << seventh << " " << std::endl;
        std::cout << "Sum of the digits: " << sum << std::endl;
        }

        return 0;
}
