#include "ConsoleUI.h"
#include <Windows.h>

ConsoleUI::ConsoleUI() {}

ConsoleUI::~ConsoleUI() {}


void ConsoleUI::printCentered(const std::string& text, int width) {
	int padding = (width - static_cast<int>(text.length())) / 2;
	if (padding > 0) std::cout << std::string(padding, ' ');
	std::cout << text << std::endl;
}
void ConsoleUI::printWithPadding(const std::string& text, int padding) {
	if (padding > 0) std::cout << std::string(padding, ' ');
	std::cout << text << std::endl;
}

void ConsoleUI::displayWelcomeMessage() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    std::cout << R"(


	_______   __                            _______               __        __      __           
	|       \ |  \                          |       \             |  \      |  \    |  \          
	| $$$$$$$\ \$$ _______    ______        | $$$$$$$\  ______   _| $$_    _| $$_   | $$  ______  
	| $$  | $$|  \|       \  /      \       | $$__/ $$ |      \ |   $$ \  |   $$ \  | $$ /      \ 
	| $$  | $$| $$| $$$$$$$\|  $$$$$$\      | $$    $$  \$$$$$$\ \$$$$$$   \$$$$$$  | $$|  $$$$$$\
	| $$  | $$| $$| $$  | $$| $$  | $$      | $$$$$$$\ /      $$  | $$ __   | $$ __ | $$| $$    $$
	| $$__/ $$| $$| $$  | $$| $$__/ $$      | $$__/ $$|  $$$$$$$  | $$|  \  | $$|  \| $$| $$$$$$$$
	| $$    $$| $$| $$  | $$ \$$    $$      | $$    $$ \$$    $$   \$$  $$   \$$  $$| $$ \$$     \
	 \$$$$$$$  \$$ \$$   \$$  \$$$$$$        \$$$$$$$   \$$$$$$$    \$$$$     \$$$$  \$$  \$$$$$$$
                                                                                                                                                                                        
    )" << std::endl;
	
	printCentered("\xF0\x9F\xA6\x96 Welcome to the Ultimate Dino Battle Arena! \xF0\x9F\xA6\x95 \n ");
	printWithPadding("\xE2\x9E\xA4",20);
	printWithPadding("\xE2\x9E\xA4", 20);
	printWithPadding("\xE2\x9E\xA4", 20);
	printWithPadding("\xE2\x9E\xA4", 20);
	printWithPadding("\xE2\x9E\xA4", 20);
	std::cin.ignore();
}

void ConsoleUI::displayMenu() {
	std::cout << "1. Start Game" << std::endl;
	std::cout << "2. Load Game" << std::endl;
	std::cout << "3. Exit" << std::endl;
}

void ConsoleUI::displayGoodbyeMessage() {
	std::cout << "Thank you for playing Dino Battle!" << std::endl;
}
