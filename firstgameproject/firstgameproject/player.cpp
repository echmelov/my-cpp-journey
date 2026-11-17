#include "player.h"
#include <iostream>

Player::Player(std::string n) : hp(100), stamina(100) {}
void Player::showStats() {
	std::cout << "Health points: " << hp << '\n';
	std::cout << "Stamina: " << stamina << '\n';	
}
bool Player::isAlive() {
	if (hp > 0) {
		return true;
	}
	else{
		return false;
	}
}
void Player::takeActions() {
	char choice;
	do{
		std::cout << "Enter your choice: ";
		std::cout << "\n1 = Grind items \n2 = Take a nap \n3 = Go forward\n";
		std::cin >> choice;
	} while (choice != '1' && choice != '2' && choice != '3');
	if (choice == '1') {
		std::cout << "\n [!] During a resource-gathering run, you took a hit to the face—20 damage and 30 energy lost.\n\n";
		hp = hp - 20;
		stamina = stamina - 30;
	}
	else if (choice == '2') {
		std::cout << "\n [+] You restore 20 points of your health and energy.\n\n";
		hp = hp + 20;
		stamina = stamina + 20;
	}
	else{
		std::cout << "\n [->] You are gradually moving forward along your path.\n\n";
	}
}