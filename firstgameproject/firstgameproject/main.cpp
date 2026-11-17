#include "player.h"
#include "memory"
int main() {
	auto player = std::make_unique<Player>("serpens");
	player->showStats();
	player->takeActions();
	player->showStats();
	return 0;
}