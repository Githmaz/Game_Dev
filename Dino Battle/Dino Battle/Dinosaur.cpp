#include "Dinosaur.h"
#include "Rarity.h"
#include <iostream>

Dinosaur::Dinosaur(std::string name, int maxHealth, int defend, int attack, Rarity rarity, bool alive)
	:maxHealth(maxHealth), defend(defend), attack(attack), rarity(rarity), name(name), alive(alive)
{
	currentHealth = maxHealth;
	alive = true;
}

Dinosaur::~Dinosaur()
{
	std::cout << "Dinosaur destroyed!" << std::endl;
}

int Dinosaur::getMaximumHealth()
{
	return maxHealth;
}
int Dinosaur::getCurrentHealth()
{
	return currentHealth;
}
int Dinosaur::getDefend()
{
	return defend;
}
int Dinosaur::getAttack()
{
	return attack;
}
std::string Dinosaur::getName()
{
	return name;
}
Rarity Dinosaur::getRarity()
{
	return rarity;
}
void Dinosaur::takeDamage(int damage)
{
	currentHealth -= damage;
	if (currentHealth <= 0)
	{
		currentHealth = 0;
		alive = false;
	}
}
void Dinosaur::heal(int amount)
{
	currentHealth += amount;
	if (currentHealth > maxHealth)
	{
		currentHealth = maxHealth;
	}
}
bool Dinosaur::isAlive()
{
	return alive;
}