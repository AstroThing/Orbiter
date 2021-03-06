/*
 * GameWorld.h
 *
 *  Created on: Dec 3, 2015
 *      Author: andres
 */

#ifndef GAMEWORLD_H_
#define GAMEWORLD_H_

#include <list>
#include <stdlib.h>
#include <math.h>
#include <sstream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <Box2D/Box2D.h>
#include "Entities/Entity.h"
#include "Entities/Player.h"
#include "Entities/Asteroid.h"

class GameWorld {
public:
	bool gameover, gameStarted, paused;
	int asteroidCount, maxAsteroids;
	float screenW, screenH;
	list<Entity*>* entities;
	GameWorld(list<Entity*>* entities);
	virtual ~GameWorld();
	void pause();
	void spawnAsteroids();
	void clean();
	void saveScore();
};

#endif /* GAMEWORLD_H_ */
