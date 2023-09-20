#include "Pikachu.h"
using namespace std;

Pikachu::Pikachu(const string& pikaName, const string& pikaSpecies, int power): Pokemon(pikaName, pikaSpecies) {
	electricPower = power;
}

void Pikachu::useElectricShock(Pokemon& target){
	target.takeDamage(electricPower);
	cout << "Pikachu used Electric Shock!" << endl;
	cout << target.getName() << " took " << electricPower << " damage!" << endl;
}
