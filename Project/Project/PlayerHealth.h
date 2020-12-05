#ifndef PLYRHLTH
#define PLYRHLTH

#include <iostream>
#include "Constants.h"

using namespace std;

class PlayerHealth {

private:

	int playerHealth;

public:

	void setPlayerHealth(int plyrHlth) {
		playerHealth = plyrHlth;
	}

	int getPLayerHealth() {
		return playerHealth;
	}

};


#endif
