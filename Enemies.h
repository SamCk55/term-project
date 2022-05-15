#pragma once
#include"EnemyCharacter.h"
//Enemy Team
class Enemies : public BaseCharacter
{
public:
	EnemyCharacter enemy1, enemy2;

	void setEnemies();

	void printPlot();

};

