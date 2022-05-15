#pragma once
#include"PlayerCharacter.h"
//Player Team
class Players : public BaseCharacter
{
public:
	PlayerCharacter player1, player2;

	void setPlayers();

	void printPlot();

};
