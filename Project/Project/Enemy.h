#ifndef ENMY
#define ENMY

#include <iostream>

#include "EnemyControl.h"
#include "EnemyHealth.h"
#include "GameEnvironment.h"
//#include "Player.h"

using namespace std;

class Enemy {
private:
	int strength;
	string type;

	EnemyControl enemyControl;
	EnemyHealth enemyHealth;
	GameEnvironment gameEnvironment;
public:
	Enemy() {
		strength = (rand() % 5) + 1; // to get  avalue between 0 to 4 since we are gna hold 4 enemies inside the arraylist fo enemies in the 
	}

	void moveRight() {
		enemyControl.setX(enemyControl.getX() + 5);
	}

	void moveLeft() {
		enemyControl.setX(enemyControl.getX() - 5);
	}

	void reducePlayerHealth() {
		if (Enemy.pe == "fire") {
			if (collision == true) {
				return setPlayerHealth = getPlayerHealth - 40;
			}
			return 0;
		}
		if (attacker.type == "water") {
			if (collision == true) {
				return setPlayerHealth = getPlayerHealth - 30;
			}
			return 0;
		}
		if (attacker.type == "ground") {
			if (collision == true) {
				return setPlayerHealth = getPlayerHealth - 10;

			}
			return 0;
		}
		if (attacker.type == "rock") {
			if (collision == true) {
				return setPlayerHealth = getPlayerHealth - 20;
			}
			return 0;

	}


};

#endif
