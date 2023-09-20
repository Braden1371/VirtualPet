/*************************************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assignment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods. Then create child
 * 	  classes that inherit and extend the virtual pet class.
*/

#include "Pikachu.h"
using namespace std;

Pikachu::Pikachu(const string& pikaName, const string& pikaSpecies, int power): 
     Pokemon(pikaName, pikaSpecies) {
	electricPower = power;
}

void Pikachu::useElectricShock(Pokemon& target){
	target.takeDamage(electricPower);
	cout << "Pikachu used Electric Shock!" << endl;
	cout << target.getName() << " took " << electricPower << " damage!" << endl;
}
