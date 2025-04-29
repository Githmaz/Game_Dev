#include <iostream>
#include "Dinosaur.h"
#include "Menu.h"
#include "ConsoleUI.h"
#include <Windows.h>

int main() {
	ConsoleUI ui;         
	ui.displayWelcomeMessage();
	Menu menu;
	menu.showDinoMenu();

	return 0;
}

