#include "Dinosaur.h"
#include <iostream>
Dinosaur::Dinosaur(int health, int defend, int attack) 
	:maxHealth(health), defend(defend), attack(attack)
{
}
Dinosaur::Dinosaur(int health, int defend, int attack, int currentHealth)
	:maxHealth(health), defend(defend), attack(attack), currentHealth(currentHealth)
{
}
Dinosaur::~Dinosaur()
{
	std::cout << "Dinosaur destroyed!" << std::endl;
}
