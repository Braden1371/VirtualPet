/*************************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assignment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods. Then create
 * 	child classes that inherit and extend the virtual pet class.
*/

#ifndef VIRTUALPET_H
#define VIRTUALPET_H

#include <iostream>
using namespace std;

class VirtualPet {
	private:
		string name;
		int happiness;
		int hunger;


	protected:
		virtual void increaseHappiness(int amount);
		void decreaseHappiness(int amount);
		void increaseHunger(int amount);
		void decreaseHunger(int amount);

	public:
		VirtualPet(const string& petName);
		void feed();
		void play();
		void makeSound() const;
		string getName() const;
		int getHappiness() const;
		int getHunger() const;
};

#endif
