#ifndef ENMY
#define ENMY

#include <iostream>

#include "EnemyControl.h"
#include "EnemyHealth.h"
#include "GameEnvironment.h"
#include "Player.h"

using namespace std;

class Enemy {
private:
	EnemyControl enemyControl;
	EnemyHealth enemyHealth;
	GameEnvironment gameEnvironment;
	Player player;
public:
	void moveRight() {
		enemyControl.setX(enemyControl.getX() + 5);
	}

	void moveLeft() {
		enemyControl.setX(enemyControl.getX() - 5);
	}

	void reducePlayerHealth() {
		//if the enemy collides with player
		//method in the other class somewhere 
	}


};

#endif