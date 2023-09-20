/***********************************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assignment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods. Then create child
 * 	  classes that inherit and extend the virtual pet class.
*/

#ifndef POKEMON_H
#define POKEMON_H

#include "VirtualPet.h"

class Pokemon : public VirtualPet {
	private:
		string species;
		int health;

	protected:
		void increaseHappiness(int amount) override;

	
	public:
		Pokemon(const string& pokemonName, const string& speciesName);
		void takeDamage(int damage);
		string getSpecies() const;
		void makeSound() const;
		int getHealth() const;
};

#endif
