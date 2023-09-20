/******************************************************************************************************************
 * 	Braden Harris
 * 	CS-355
 * 	Assignment #7
 * 	9/20/23
 * 	Create a virtual pet class with attributes and methods. Then create child
 * 	  classes that inherit and extend the virtual pet class.
*/

#include "Gatomon.h"

using namespace std;

Gatomon::Gatomon(const string& gatName, const string& gatElement, int sharpness) : Digimon(gatName, gatElement){
	catClawSharpness = sharpness;
}

void Gatomon::useCatClawAttack(Digimon& target){
	cout << getName() << " used the Cat Claw Attack!" << endl;
	cout << target.getName() << " did not like that one bit!" << endl;
}

int Gatomon::getSharpness()const {
	return catClawSharpness;
}
