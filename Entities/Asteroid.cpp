/*
 * Asteroid.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: andres
 */

#include "Asteroid.h"

const float SCALE = 30.0;

Asteroid::Asteroid(float x, float y, float scale, string texturePath) : Entity(x, y, scale, texturePath){
	this->type = "Asteroid";

	//Body definitions
	bodyDef.type = b2_dynamicBody;
	body = world->CreateBody(&bodyDef);

	//Shape definitions
	b2CircleShape asteroidShape;
	asteroidShape.m_radius = ((texture.getSize().x*this->getScale().x)/2)/SCALE;

	//Fixture definitions
	fixtureDef.shape = &asteroidShape;
	fixtureDef.restitution = 0.2f;
	body->CreateFixture(&fixtureDef);
}

Asteroid::~Asteroid() {
	// TODO Auto-generated destructor stub
}
