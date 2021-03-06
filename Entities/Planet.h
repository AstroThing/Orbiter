/*
 * Planet.h
 *
 *  Created on: Nov 19, 2015
 *      Author: andres
 */

#ifndef ENTITIES_PLANET_H_
#define ENTITIES_PLANET_H_

#include "Entity.h"
#include "Player.h"

class Planet : public Entity{
public:
	float gravityForce;
	b2CircleShape planetShape;
	Planet(float x, float y, float scale, string textureKey);
	virtual ~Planet();
	void setGravityForce(float gravityForce);
	b2Vec2 getCurrentForce(Entity* entity);
	void step();
};

#endif /* ENTITIES_PLANET_H_ */
