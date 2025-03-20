#include <iostream>
#include "Dinosaur.h"
#include "Menu.h"

int main() {
	std::cout << "Hello, Dino Battle Arena!" << std::endl;

	Menu* menu = Menu::getInstance();
	menu->showDinoMenu();

	return 0;
}

