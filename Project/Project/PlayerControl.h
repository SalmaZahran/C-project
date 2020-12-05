#ifndef PLYRCTRL
#define PLYRCTRL

#include <stdio.h>

#include <iostream>

#include <String>
#include <vector>


using namespace std;

class PlayerControl {
private:
    int x, y;
    double JumpTime, AbilityCooldown;
    vector <string> allAbilities();
    int PlayerCordsX, PlayerCordsY;

    //these are the initial cords where the player starts at



public:
    PlayerControl(int x, int y) {
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
    void jump (int PlayerCordsY, double JumpTime, int Gravity) {


        // this will be controlled by the user which will change the Y cords accordingly


        //the jump will be dependent on the timer for how long the player will be in the air , half of the timer’s time the player will be jumping up then the other half will be the player going downwards with a speed based on the gravity


        //the jump will happen by affecting the Y cords of the player making it higher till a point of standstill then lower 


        //this method can work at the same time as the PlayerMovements method to make sideways jumps


        // if the player collides with a roof above then the he will fall downwards right away at the same speed he was going upwards using so that the player cant go through roofs


        // if the player jumps onto a platform above then the Y cords wont go back down so that the player is mot pushed back through the floor


    }



    void playerMovements(int PlayerCordsX) {


        //this will be controlled by the user which will change the X cords positively or negatively depending on which direction the user wants to move


        //if the player collides with a wall in the direction that the player is moving then as long as he is still trying to move in the same direction then the X cords of the player wont change so that he wont go through walls


        //if the player collides with an enemy in the direction that the player is moving then as long as he is still trying to move in the same direction and the enemy has not moved then the X cords of the player wont change so that he wont go through enemies


        //the player will keep going downwards based on gravity if they stepped in sand



    }


    void abilities(string AllAbilities, double AbilityCooldown) {


        // the player will have 2 abilities chosen at random from the arraylist 


        // each ability will have different effects from effecting the player himself to effecting the enemies

        //abilities will have a limit of usage within a certain period of time as a cooldown to avoid ability spam


    }



    void UseWeapon(bool hasWeapon) {



        // if hasWeapon is true and the player attacks then UseWeapon will become true and instead of a normal attack the user will attack with a weapon


        // once the user does the attack then UseWeapon will turn back to false until the user attacks again 


    }


    void knockback(int PlayerCordsX, int GetHealth) {


        //when health is damaged then the player will be thrown backwards a small distance due to knockback 


    }


    void fall(int PlayerCordsY) {


        // if there is no ground under the player the. The player will be affected by gravity and falls until the floor or if there is no floor and is a trap then the player will lose


        //if the player stands in sand then the player will fall due to gravity but at a slower rate due to sand having a small resistance and to give the player a chance to escape


    }
};

#endif





