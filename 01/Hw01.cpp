//  NAME  : AIDEN PEACE 
//  CLASS : CS1A TTH 2pm 
// ASSIGNMENT : QUESTION12 page18

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{

	double speedA;
	double speedB;

	double timeA;
	double timeB;

	double DistanceA;
	double DistanceB;

	double averageSpeed;
	double elapsedTime;
	double DistanceBetween;

	std::cout << "What is the average speed in miles per hour for Car A ? "; 
	std::cin  >> speedA;

	std::cout << "What is the average speed in miles per hour for Car B? ";
	std::cin  >> speedB;
	
	std::cout << "What is the elapsed time in MINS ? ";
	std::cin  >> elapsedTime;

	DistanceA = (elapsedTime / 60 ) * speedA;
	DistanceB = (elapsedTime / 60 ) * speedB;

	DistanceBetween= (sqrt((DistanceA * DistanceA) + (DistanceB * DistanceB))); 

	std::cout << "The distance between the two cars is " <<  DistanceBetween << " miles. \n";
	
}
