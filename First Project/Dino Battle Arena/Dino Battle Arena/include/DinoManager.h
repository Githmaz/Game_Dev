#pragma once
#include <iostream>
#include <vector>
#include "../include/Dinosaur.h"

class DinoManager {
private:
	static DinoManager* instance;
	std::vector<Dinosaur*>allDinosaurs;
	std::vector<Dinosaur*>userDinosaurs;
	std::vector<Dinosaur*>opponentDinosaurs;

public:
	DinoManager();
	~DinoManager();
	static DinoManager* getInstance();
	void addDinosaur(Dinosaur* dino);
	void removeDinosaur(Dinosaur* dino);
	void showAllDinosaurs();
	void loadDinosaurs();
};