#include "../include/Menu.h"
#include "../include/UserInput.h"
#include <iostream>

Menu::Menu() {
}

Menu::~Menu() {
}

void Menu::showDinoMenu() {
	while (true) {
		std::cout << "Dino Battle Arena" << std::endl;
		std::cout << "	1. Play" << std::endl;
		std::cout << "	2. Show Dino List" << std::endl;
		std::cout << "	3. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		int choice = UserInput::getIntInRange(1, 3);

		switch (choice) {
		case 1:
			playTheGame();
			break;

		case 2:
			showDinoList();
			break;

		case 3:
			return;

		}


	}
	
}

void Menu::playTheGame() {
	std::cout << "Playing the game..." << std::endl;
}
void Menu::showDinoList() {
	std::cout << "Showing the list of dinosaurs..." << std::endl;
}

void Menu::loadDinosaurs() {
	std::cout << "Loading dinosaurs..." << std::endl;
}