#ifndef WPN
#define WPN

#include <iostream>

using namespace std;

class Weapon {

private:
	//fields will be decided later as we begin to program

public:

	void shootLaser() {
		//it will be called when the player finds chest of weapons (the chest of weapons will have a list of weapons and one weapon will be chosen randomly each time)
		//a projectile will be fired from the player 
		//then if it collides with the enemy (based on the enemy it will require different amounts of projectiles) 
		//however might just be kept as >> 2 projectiles kill any type of enemy
		//then if it collides with the enemy... 
		//the enemy dies and disappears 
		//we could make the enemies shoot too (but not sure yet) - and reduce the player health
	}

	void jumpOffWall() { //more like latch to walls (might be moved to the game environment but it was written in the requirments of a weapon so it is included here for now)
		//if the player is trying to jump and latches to something instead of falling 
		//this method will be called
		//a player will latch unto the wall 
		//and a timer will be set to a certain period 
		//if the player didnt jump higher or did something (basically unlatch itself off of the wall)
		//he will fall and lose health (loseHealthh will be called)
		//this method will have something to do with the collision of the player to the wall 
		//to stimualte the latching ability
	}


};





#endif
