#pragma once

class Menu
{
	static Menu* instance;
private :
	Menu();
	~Menu();

public :
	static Menu* getInstance();
	void showDinoMenu();
	void playTheGame();
	void showDinoList();
};
