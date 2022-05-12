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
		sf::CircleShape getShape();
		float getWeight(float gravity, int mass); 
		float getVelocity(sf::Vector2f displacement); //simple
		float getAccerlation(sf::Vector2f displacement);
		sf::Vector2f getDisplacement(sf::Vector2f initPos);

		bool select(bool selected); // select operation, returns isSelected t/f

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

		void setShape(sf::CircleShape newshape) {
			shape = newshape;
		}
		
		
};

