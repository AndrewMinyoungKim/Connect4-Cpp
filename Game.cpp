#include <iostream>
#include "Game.h"

using namespace std;

Game::Game() {
	this->fart = 7;
	cout << "This is a damn constructor" << endl;
}

int Game::winner(string colour) {
	cout << "Winner is: " << colour << endl;
	return 69;
}

int Game::getLegalMoves() {
	cout << "F" << endl;
	return 420;
}