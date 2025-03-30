#include "../include/DinoManager.h"
#include <iostream>

// Initialize static instance
DinoManager* DinoManager::instance = nullptr;

DinoManager::DinoManager() {}

DinoManager::~DinoManager() {}

DinoManager* DinoManager::getInstance() {
	if (instance == nullptr) {
		instance = new DinoManager();
	}
	return instance;
}

void DinoManager::loadDinosaurs() {
	allDinosaurs.push_back(new Dinosaur("Ankylosaurus", 140, 70, 15, Rarity::Rare, true));
	allDinosaurs.push_back(new Dinosaur("Allosaurus", 100, 30, 45, Rarity::Epic, true));
	allDinosaurs.push_back(new Dinosaur("Brachiosaurus", 200, 40, 10, Rarity::Rare, true));
	allDinosaurs.push_back(new Dinosaur("Dilophosaurus", 85, 20, 35, Rarity::Common, true));
	allDinosaurs.push_back(new Dinosaur("Pachycephalosaurus", 90, 35, 30, Rarity::Common, true));
	allDinosaurs.push_back(new Dinosaur("Therizinosaurus", 110, 25, 50, Rarity::Epic, true));
	allDinosaurs.push_back(new Dinosaur("Iguanodon", 95, 30, 25, Rarity::Common, true));
	allDinosaurs.push_back(new Dinosaur("Carnotaurus", 105, 20, 55, Rarity::Epic, true));
	allDinosaurs.push_back(new Dinosaur("Giganotosaurus", 135, 40, 65, Rarity::Legendary, true));
	allDinosaurs.push_back(new Dinosaur("Compsognathus", 50, 10, 15, Rarity::Common, true));
	allDinosaurs.push_back(new Dinosaur("Indoraptor", 125, 35, 70, Rarity::Legendary, true));
	allDinosaurs.push_back(new Dinosaur("Indominus Rex", 150, 50, 75, Rarity::Legendary, true));
	allDinosaurs.push_back(new Dinosaur("Utahraptor", 95, 30, 50, Rarity::Epic, true));
	allDinosaurs.push_back(new Dinosaur("Parasaurolophus", 120, 45, 20, Rarity::Rare, true));
	allDinosaurs.push_back(new Dinosaur("Mosasaurus", 170, 30, 80, Rarity::Legendary, true));
}

void DinoManager::addDinosaur(Dinosaur* dino) {
}

void DinoManager::removeDinosaur(Dinosaur* dino) {

}

void DinoManager::showAllDinosaurs() {

}
