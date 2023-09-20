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
