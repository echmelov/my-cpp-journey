#pragma once
#include <iostream> 
#include <string>

class Player {
private:
	std::string name;
	int hp;
	int stamina;
public: 
	Player(std::string n);
	void showStats();
	void takeActions();
	bool isAlive();
};