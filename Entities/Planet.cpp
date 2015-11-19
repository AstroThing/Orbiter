/*
 * Planet.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: andres
 */

#include "Planet.h"

const float SCALE = 30.0;

Planet::Planet(b2World* world, RenderWindow* window) : Entity(world, window){
	this->type = "Planet";
}

Planet::~Planet(){
	// TODO Auto-generated destructor stub
}

void Planet::configure(float x, float y, float mass, float size, string texturePath)
{
	x/=SCALE;
	y/=SCALE;
	size/=SCALE;

	//Properties
	this->mass = mass;

	//Texture loading
	texture.loadFromFile(texturePath);

	//Body definitions
	bodyDef.position = b2Vec2(x, y);
	bodyDef.type = b2_staticBody;
	body = world->CreateBody(&bodyDef);

	//Shape definitions
	b2CircleShape planetShape;
	planetShape.m_radius = size;

	//Fixture definitions
	fixtureDef.shape = &planetShape;
	body->CreateFixture(&fixtureDef);

	drawReady = true;
}