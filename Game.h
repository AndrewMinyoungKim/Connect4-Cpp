#pragma once
#include <iostream>
#include <string>
using namespace std;

class Game {

//private:
	//nothing

public:
	int fart;
	int state[7][6]; //initialize
	string turn = "red";

	Game();

	int winner(string colour);

	int getLegalMoves();
};