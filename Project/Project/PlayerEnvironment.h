 #ifndef PLYRENV
#define PLYRENV

#include <iostream>
#include "PlayerHealth.h"
#include "Player.h"

using namespace std;

class PlayerEnvironment {

private:
	Player player;
	PlayerHealth playerHealth;

public:
	void loseHealth() {
		// player loses health if it collides with enemy
		//TODO PLayer class : boolean method if the player collided with the enemy 
		if (player.collideWithEnemy()) { 
			playerHealth.setPlayerHealth(//call the method that has a switch case for how much you should minus from the playerHealth depending on the enemy encountered)
		}
		// different damage is incurred depending on enemy 
		//			data structure having all the different types of enemies [5, 10, 15, 20]


		// when he jumps - health is also lost
		// setHealth with health value
		//prolly gna call the setColour method inside
	}

	bool isPlayerDead() {
		// if statement -> if getHealth <= 0; then returns true ; otherwise return false  
	}

	//This is not going to be a method most prolly (just a comment for now)
	//bool hasPlayerWon() {
		//when boss is killed
		//our boolean field turns to true
	//}


	void setColor(PlayerHealth plyrHlth) {
		//gets called inside lose health
		//if (getHealth() < constant) 
		//							then -> RGB mulitiplied by the ((const heath - getHEalth())/100).

		// if isPlayerDead is true >> then >> colour is set to grey
	}


};


#endif

