#include <iostream>
#include <vector>
#include <string>

class Car {
protected:
	std::string* brand;
	int* speed;
public:
	Car(std::string carBrand, int carspeed) {
		brand = new std::string(carBrand);
		speed = new int(carspeed);
	}

	virtual void drive() {
		std::cout << "Mashina brenda" << *brand << "dvijetsa so skorostiu " << *speed << " km/h" << '\n';
	}

	virtual ~Car() {
		std::cout << "Mashina brenda" << *brand << "udalena. " << '\n';
		std::cout << "Skorost` " << *speed << ", s kotoroy dvigalsa avtomobil`, byla udalena. " << '\n';
		delete brand;
		delete speed;
	}
};

class sportCar : public Car {
public:
	sportCar(std::string carBrand, int carspeed) : Car(carBrand, carspeed) {
		*speed += 50;
	}
	void drive() {
		std::cout << "Mashina brenda " << *brand << " LETIT SO SKOROSTIU " << *speed << '\n';
	}

};

int main() {
	std::vector<Car*> showroom;
	showroom.push_back(new Car("Toyota", 100));
	showroom.push_back(new sportCar("Lambo", 130));

	for (int i = 0; i < showroom.size(); i++) {
		showroom[i]->drive();
	}
	for (int i = 0; i < showroom.size(); i++) {
		delete showroom[i];
	}
}