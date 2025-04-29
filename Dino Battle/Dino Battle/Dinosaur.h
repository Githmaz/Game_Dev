#pragma once
#include "Rarity.h"
#include <string>
class Dinosaur
{
private:
	const std::string name;
	const Rarity rarity;
	const int maxHealth;
	int currentHealth;
	const int defend;
	const int attack;
	bool alive;

public:
	Dinosaur(std::string name, int maxHealth, int defend, int attack, Rarity rarity, bool alive);
	~Dinosaur();
	int getMaximumHealth();
	int getCurrentHealth();
	int getDefend();
	int getAttack();
	std::string getName();
	Rarity getRarity();
	void takeDamage(int damage);
	void heal(int amount);
	bool isAlive();
};
