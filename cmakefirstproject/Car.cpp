#include "Car.h"
#include <iostream>

Car::Car(std::string b) : brand(b) {
	std::cout << "brand " << brand << " sobrali na zavode \n";
}
void Car::drive() {
	std::cout << brand << " edet so skorostiu 120 km/r \n";
}