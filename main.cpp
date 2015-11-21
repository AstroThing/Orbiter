/*
 * main.cpp
 *
 *  Created on: Nov 10, 2015
 *      Author: andres
 */
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>

#include "Entities/Entity.h"
#include "Entities/Planet.h"
#include "Entities/Asteroid.h"
#include <vector>

using namespace std;
using namespace sf;

const float SCALE = 30.0;

int main()
{
	//Window settings
	RenderWindow window(VideoMode(800,600), "Orbiter");
	window.setFramerateLimit(60);

	//World settings
	b2Vec2 gravity(0.0f, 0.0f);
	b2World world(gravity);

	//Entities
	Entity::init(&world, &window);
	vector<Entity*> entities;

	float planetX = window.getSize().x/2.f;
	float planetY = window.getSize().y/2.f;
	entities.push_back(new Planet(planetX, planetY, 0.25f, "assets/planets/Planet-8.png"));
	((Planet*)entities[0])->setGravityForce(500.0f);

	entities.push_back(new Asteroid(0.0f, 0.0f, 1.0f, "assets/asteroid.png"));

	//*DELETE*
	b2Vec2 force(215.f, -15.f);
	entities[1]->getBody()->ApplyForce(force, entities[1]->getBody()->GetWorldCenter(), false);
	entities[1]->getBody()->SetAngularVelocity(10.f);

	bool paused = false;

	while(window.isOpen())
	{
		Event event;
		while(window.pollEvent(event))
		{
			if(event.type == Event::Closed)
				window.close();
			if(event.type == Event::KeyPressed && event.key.code == Keyboard::Return)
			{
				paused = paused ? false : true;
			}
		}

		if(!paused)
		{
			//Logic
			world.Step(1/60.f, 8, 3);
			((Asteroid*)entities[1])->step(&entities);

			//Drawing
			window.clear(Color::Black);
			entities[0]->draw();
			entities[1]->draw();
			window.display();
		}
	}

	return 0;
}




