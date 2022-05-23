#pragma once

#include <iostream>
#include <cmath>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "Environment.h"

/*

- Notes to Arthur
	* I rearranged the declarations and you can see if you like it.
	* I also moved all the initializations of the functions into Object.cpp.
	* ^ I like this way better b/c it looks nicer. You can just right-click a method name and 
	click "Quick actions and refactorings" -> Create definition and it makes it really easy to make getters/setters
	
	* I changed the constructor so that it takes in an Environment pointer. The environment that is passed in is supposed
	to be like the environment that the object is existing in. This makes it possible to use the specificty gravity/friction/etc
	of that environment as you can see in the "getWeight()" method.
	* You may notice that there is not "setWeight()" method. This is because it doesn't make sense to have that since weight is
	solely based on mass and gravity. Therefore to have consistency, you can only change the weight indirectly by changing the
	mass or gravity.

	* I also removed the getDisplacement() function because I don't think that you will need it (add it back if you want)

	* The last thing I did was make an update() function that you can see for yourself.
	* In my next commit, I will put example code in Physics2D.cpp of the update() function working.

*/

class Object
{
	public:
		static std::vector<Object*> list;
		Object(Environment* environment);
		void update();
		bool select(bool selected); // select operation, returns isSelected t/f

		sf::CircleShape getShape();
		sf::Vector2f getPosition();
		sf::Vector2f getVelocity();
		sf::Vector2f getAcceleration();
		float getWeight(); 
		bool getSelected();
		bool getBreakable();
		int getMass();

		void setShape(sf::CircleShape newshape);
		void setPosition(sf::Vector2f position);
		void setVelocity(sf::Vector2f velocity);
		void setAccceleration(sf::Vector2f acceleration);
		void setSelected(bool Nselected);
		void setBreakable(bool status);
		void setMass(int grams);
	private:
		Environment* environment;
		sf::CircleShape shape; // circle shape can make triangles, any other geometrical standard shape
		sf::Vector2f position;
		sf::Vector2f velocity;
		sf::Vector2f acceleration;
		float weight;
		bool selected;
		bool breakable; 
		int mass; //in terms of grams or kilograms
};

