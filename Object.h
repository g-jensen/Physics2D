#pragma once

#include <iostream>
#include <cmath>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Object
{
	private:
		sf::CircleShape shape; // circle shape can make triangles, any other geometrical standard shape
		bool breakable; 
		int mass; //in terms of grams or kilograms
		bool groundstateMovability(); //can it move from resistence from ground vs force extered? 


	public:
		float getWeight(float gravity, int mass); 
		float getVelocity(); //simple
		float getAccerlation();
		sf::Vector2f getDisplacement(sf::Vector2f initPos);

		bool select(); // select operation, returns isSelected t/f

		int getMass() {
			return mass;
		};
		
		void setMass(int grams) {
			mass = grams;
		};

		bool getBreakable() {
			return breakable;
		};

		void setBreakable(bool status) {
			breakable = status;
		};

		sf::CircleShape getShape() {
			return shape;
		}

		void setShape(sf::CircleShape newshape) {
			shape = newshape;
		}
		
		
};

