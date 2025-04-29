#pragma once
#include <iostream>

class ConsoleUI {
private:
	void printCentered(const std::string& text, int width = 80);
	void printWithPadding(const std::string& text, int padding = 0);
public:
	ConsoleUI();
	~ConsoleUI();

	void displayWelcomeMessage();
	void displayMenu();
	void displayGoodbyeMessage();
};
