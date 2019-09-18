#ifndef PLAYER_H
#define PLAYER_H

#include "Actor.h"

class Game;

class Player : public Actor {
public:
	// Constructors and Destructors
	Player(Game*, int hp=100, int arm=50, int pwr=1, int rate=1, char character='@', int x=5, int y=17);
	virtual ~Player();

	// Member functions
	virtual void attack(Actor*);
	virtual void move(char character);
	virtual void update();
	void applyEffects();
private:
	// private vars here
};

#endif