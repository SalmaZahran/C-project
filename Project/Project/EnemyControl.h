
#ifndef ENMYCTRL
#define ENMYCTRL

#include <iostream>

using namespace std;

class EnemyControl {

	// private object coordinates
private:
	int x, y;

public:
	// Create an object with enemy position
	EnemyControl(int x, int y) {
		this->x = x;
		this->y = y;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void setX(int xValue) {
		x = xValue;
	}

	void setY(int yValue) {
		y = yValue;
	}

	// this function is used to move the enemy in the x-axis randomlly with location approch
	void move(int displacement) {
			
	}

	// this function is used to move an enemny towards a player, attacking and reduce player's health
	void attackPlayer(Player player, Weapon weapon, EnemyHealth EH) {

	}

	// this function is used to check if current enemeny collides with a given player
	bool hasCollision(Player player) {

	}




};

#endif