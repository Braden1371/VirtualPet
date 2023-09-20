/*******************************************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assignment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods. Then create child classes
 * 	  that inherit and extend the virtual pet class.
 */

#include "Digimon.h"
using namespace std;

Digimon::Digimon(const string& digName, const string& digElement) : VirtualPet(digName) {
	element = digElement;
}

void Digimon::useSpecialAttack(){
	cout << getName() << " used their special attack!" << endl;
}

string Digimon::getElement()const {
	return element;
}
