#ifndef ENMYHLTH
#define ENMYHLTH

#include <iostream>

using namespace std;

class EnemyHealth {
private:

public:

	void loseLife() { //essesntially enemy's loseHealth()
		//all enemy object die when shot twice by a weapon (2 projectiles) ( for now for simplicity) 
		//if there is no weapon - an enemy dies when the player jumps x number of times depending on the enemy (out of the enemy list)

	}

	bool enemyDead() {
		//if all health is lost depending on the enemy
		//cuz different enemies have different value "strength"
		// the enemy dies and disappears - a message prints enemy dead! or smth 
	}

};


#endif