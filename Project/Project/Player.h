#ifndef PLYR
#define PLYR

#include <iostream>

#include "PlayerHealth.h"
#include "PlayerControl.h"
#include "PlayerEnvironment.h"

using namespace std;

class Player {
private:
	PlayerHealth playerHealth;
	PlayerControl playerControl;
	PlayerEnvironment playerEnvironment;
public:
	void moveRight() {
		playerControl.setX(playerControl.getX() + 5);
	}

	void moveLeft() {
		playerControl.setX(playerControl.getX() - 5);
	}

	void jump() {
		playerControl.setY(playerControl.getY + )
	}


};

#endif