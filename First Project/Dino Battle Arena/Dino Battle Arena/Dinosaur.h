#pragma once
#include <iostream>
class Dinosaur
{
private: 
	 const int maxHealth;
	 int currentHealth;
	 const int defend;
	 const int attack;

public:
	Dinosaur(int maxHealth, int defend, int attack);
	Dinosaur(int maxHalth, int defend, int attack, int currentHealth);
	~Dinosaur();
};
