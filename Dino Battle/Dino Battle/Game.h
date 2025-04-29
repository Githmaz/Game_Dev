#pragma once
#include <iostream>
#include "DinoManager.h"
#include "Dinosaur.h"

class Game

{
private:
    DinoManager* dinoManager;
    Dinosaur* userDinoList;
    int opponentScore;
    int roundsPlayed;
    int totalRounds;
    bool gameOver;
	

public:
    void startGame();
    void playRound();
    void displayGameInfo();
    void displayRoundInfo();
    void displayRoundResults();
    void displayGameResults();
};
