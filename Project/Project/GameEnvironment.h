#ifndef GMENV
#define GMENV

#include <iostream>

using namespace std;

class GameEnvironment {
private:
	//will be decided later once we start programing 

public:
	void displayMazeMapInfo() {
		//have different arrays with different maps 
		//one map is chosen randomly 
		
		//int[] map1 = 
		//int[] map2 = 
		//int[] map3 = 

		//random generation of map each time a game starts
		//it will also randomly genrate the chest of weapons 
		//and the big door (the end door)
		//all these three objects will be randomly displayed each time in different positions
		//using a Random object and alist of weapons / alist of rooms(dungeons) / and a list of positions for room positioning of map shapes for simplicity

	}

	void drownObjectsInSand() { //mainly for player not all objects
		//based on gravity
		//in the map we will have some sand spots in random positions (generated randomly)
		//we will have a boolean function that will identify what floor the player is standing on
		//and if it returns true then the player is standing on sand 
		//so this method will drown the player if it is standing on sand 
		//based on the height of the character ( the players y-position is going to be changed to a larger value stimulating him drowning in the sand~~
		// and the height will get cut off too as he sinks in the sand (but not sure how to implement this yet)


	}

	//colision 
	void collision(Object a, Object b) { //the objects can be any two of the following objects:
		//a wall 
		//an enemy
		//a projectile
		//a player


		//colision will be detected using the height and width of the different objects 
		//we will assign constant values for them and based on these; collision will be detected
	}

};


#endif